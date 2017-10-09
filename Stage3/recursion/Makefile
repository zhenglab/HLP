objects = funEmbedCall factorial recursion cutCake Fibonacci dec2bin Hanoi putApple

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
