TARGET = diksam

all: $(TARGET)


$(TARGET):
	cd main; $(MAKE);

clean:
	cd main; rm -f *.o diksam
	cd compiler; rm -f *.o diksam.tab.c y.tab.c y.tab.h y.output lex.yy.c *~
	cd dvm;  rm -f *.o *~
	cd share;  rm -f *.o *~
	cd memory;  rm -f *.o *~
	cd debug;  rm -f *.o *~
	cd compiler/builtin; rm -f *.o *~
