objectsC = 
objectsCPP = structEg1 structEg2 structFunctionArg structFunctionReturn structPointerEg1 structPointerEg2 structPointerEg3 structBirthday

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
