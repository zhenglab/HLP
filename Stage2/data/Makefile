objects = typeLength hexInteger octInteger allInteger funInteger hexInput octInput MaxMinInteger precisionReal funReal funChar boolEg constantEg tmp

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
