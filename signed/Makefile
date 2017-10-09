objectsC = sign_unsign
objectsCPP = 

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
