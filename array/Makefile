objectsC = eg1 eg2 eg3 eg4 eg5 eg6 eg7 eg8 eg9 eg10 eg11 eg12 eg13 eg14 eg15 eg16 eg17 eg18 eg19 eg20 eg21 eg22 eg24 eg25
objectsCPP = eg23

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
