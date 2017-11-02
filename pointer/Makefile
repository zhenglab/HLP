objectsC = eg1 eg3 eg4 eg5 eg6 eg7 eg8 eg9 eg10 eg11 eg12 eg13 eg14 eg15 eg16 eg17
objectsCPP = eg2

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
