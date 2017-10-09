objectsC = printfEg scanfEg scanfCh getcharCh scanfStr getsStr scanfAdv getcharEOF
objectsCPP = coutEg cinEg cinInt cinStr ScanfCoutMix CoutScanfMix cinCh cingetCh getcharChCPP

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
