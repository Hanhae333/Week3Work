cc = g++
SRC = main.cpp Array.cpp RangeArray.cpp

Objects = RangeArray.o main.o Array.o
Cflags = -c -g

Target = s20191275

$(Target):$(Objects) Array.h RangeArray.h
	$(cc) -g -o $(Target) $(Objects)


.PHONY: clean
clean:
	rm $(Target) $(Objects)


