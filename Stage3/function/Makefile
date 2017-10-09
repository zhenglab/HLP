objects = funAbs funMax funNoArg funDelay funNoArgReturn argMain funMaxDeclare funExec1 funExec2 funExec3 variableEg variableLocalGlobal1 variableLocalGlobal2 funElements funArray calendar

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
