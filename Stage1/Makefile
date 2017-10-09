objects = maxNumbers weekWage simplestProgram simplerProgram1 simplerProgram2 simplerProgram3 simpleProgram1 simpleProgram2 simpleProgram3 simpleProgram4 simpleProgram5 simpleProgram6 simpleProgram7 simpleProgram8 CakeCut ChickRabbit BuyChicks1 BuyChicks2 SepOddEven NumSort NumOddEvenSort

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
