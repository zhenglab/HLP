objectsC = eg0 eg1 eg2 eg3 eg4 eg5 eg6 eg7 eg8 eg9 eg10 packtest
objectsCPP = eg11

CC=gcc
CPP=g++
CFLAGS=

all: $(objectsC) $(objectsCPP)

$(objectsC): %: %.c
	$(CC) $(CFLAGS) $< -o $@

$(objectsCPP): %: %.cpp
	$(CPP) $(CFLAGS) $< -o $@

clean:
	rm -f $(objectsC) $(objectsCPP)
