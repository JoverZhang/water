# The Water Programming Language

The Water language uses a Rust-like syntax, but it is an interpreted language based on bytecode execution.

## QuickStart

### Building Water

The Water build system uses a `CMake` to build the compiler and interpreter.

It's as simple as:

```shell
cmake -B build
cmake --build build -j
```

After building Water, it is a good idea to test it using:

```shell
ctest --test-dir build --verbose
```

### Run the example

```shell
./build/water ./examples/example.water
```

Now, you'll see the `Hello World!` in your console.

## Grammar Introduction

### Type Conversion

The following is a simple example to introduce the syntax of type conversion.

The type conversion uses a syntax similar to that of the Golang, but with some differences.
It has only one return value and throws a `TypeCastException` when the conversion fails.

```zig
use water.lang;
use water.collections.map;

struct Point {
  x: i32;
  y: i32;
}

fn main() -> void {
  let point = Point { x: 10, y: 20 };

  // 1. convert `Point` to `any`
  let p: any = point;

  // 2. cast success
  // same in c++: `std::cout << ((Point) p).x << std::endl;`
  println(p.(Point).x);

  // 3. cast fail
  try {
    let val = p.(HashMap).get("key");
  } catch(e: TypeCastException) {
    println(e.message); // This object's type is `Point`. Cannot cast to `HashMap`.
  }
}
```

So the syntax is much clearer when using chained calls. And does not need to be as complex as most languages.

Like this:

```zig
// Water
let thud = bar.foo().(Baz).qux().(Fred).thud;
// Other Language
Thud thud = ((Fred) ((Baz) bar.foo()).qux()).thud;
```

## Unit Testing

The usage of Water's unit testing is similar to that in Golang.

You just need to add `use water.testing` to the top of the file to write unit testing in the file:

```shell
use water.testing;

fn test_case(t: Testing) -> void {
  let x = 42;

  t.assert(42 == x);
}
```

You can try to run it:

```shell
./build/water test ./examples/example_test.water
```

## Language Server Protocol

> TODO

## Standard Library

The following tools are currently available in Water Standard Library:

- water.assert
- water.env
- water.fs
- water.lang
- water.math
- water.testing
- water.collections.map

### water.fs

```zig
use water.lang;
use water.testing;
use water.fs;

fn test_std_fs(t: Testing) -> void {
  // create a file and write the contents
  let file = File::create("test/tmp.txt");
  file.write("test\n");
  file.write("write\n");
  file.close();

  // open the file and read its contents
  file = File::open("test/tmp.txt");
  t.assert(file.read() == "test\n");
  t.assert(file.read() == "write\n");
  file.close();

  // remove the file
  remove_file("test/tmp.txt");
  t.assert(File::open("test/tmp.txt") == null);
}
```

### water.collections.map

```zig
use water.lang;
use water.testing;
use water.collections.map;

struct Point {
  x: i32;
  y: i32;
}

fn test_std_hashmap(t: Testing) -> void {
  let map = HashMap::new();
  let point = Point { x: 10, y: 20 };

  map.put("key1", point);

  t.assert(point == map.get("key1").(Point));
}
```
