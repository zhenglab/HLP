objects = BacteriaGroup RoundTest RoundTestArg RoundTestArgDefense

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
