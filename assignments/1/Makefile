objects = BubbleSort OddEvenSort1 OddEvenSort2 JingJingDate OddSum IntegerCount OneCount ArrayReOrder

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
