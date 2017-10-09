objects = ifBodyMassIndex ifLeapYear ifFun switchGrade1 switchGrade2 switchGrade3 switchGrade4 switchScore forTest whileSum whileAge dowhileSum dowhileDigits breakLoop breakGame continueLoop gotoSum

CC=g++
CFLAGS=

all: $(objects)

$(objects): %: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(objects)
