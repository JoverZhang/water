#!/bin/bash

SEARCH_PATH="$PWD/require:$PWD/test"

export DKM_REQUIRE_SEARCH_PATH="$SEARCH_PATH"

WATER="cmake-*/water"

tests=(
  # std
  require/water/collections/map.water

  # tests
  test/case.water
)

for t in "${tests[@]}" ; do
    echo -e "\e[34mRUN TEST: $t\e[0m"
    $WATER "$t"
    ret="$?"
    if [[ "$ret" -ne 0 ]]; then
      exit "$ret"
    fi
done
