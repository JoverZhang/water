TARGET = diksam

all: $(TARGET)


$(TARGET):
	cd main; $(MAKE);

clean:
	cd compiler; rm -f *.o *~
	cd dvm;  rm -f *.o *~
	cd share;  rm -f *.o *~
	cd memory;  rm -f *.o *~
	cd debug;  rm -f *.o *~
	cd compiler/builtin; rm -f *.o *~
