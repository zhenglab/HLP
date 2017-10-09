objectsC = sign_unsign scanfEg1 scanfEg2 scanfEg3 scanfEg4 scanfEg5 scanfEg6 scanfEg7 scanfEg8 scanfEg9 scanfEg10 scanfEg11 scanfEg12 scanfEg13
objectsCPP = typeLength

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
