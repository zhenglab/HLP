objects = arrayDefine arrayDefineConst arrayInitial 2DarrayInitial 3DarrayInitial countDigits countDigitsSwitch countDigitsSmart findPrimeNumber findPrimeNumber2

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
