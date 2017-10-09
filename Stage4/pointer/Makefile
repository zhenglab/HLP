objectsC = 
objectsCPP = variableAddress variablePointer pointerEg1 pointerEg2 pointerEg3 pointerArray1 pointerArray2 pointerArray3 pointerArray4 pointerArray5 pointerArray6 pointer2DArray1 pointer2DArray2 pointerStringArray pointerStringEg1 pointerStringEg2 pointerStringEg3 pointerStringEg4 pointer2DArrayEg1 pointer2DArrayEg2 pointer2DArrayEg3 pointerFunctionArgEg1 pointerFunctionArgEg2 pointerFunctionArgEg3 pointerFunctionArgEg4 pointerFunctionArgEg5 pointerFunctionArgEg6 pointerFunctionArgEg7 pointerFunctionArgEg8 pointerFunctionArgEg9 pointerFunctionArgEg10 pointerFunctionArgEg11

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
