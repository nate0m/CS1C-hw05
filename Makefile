CC = g++

all: hw05

hw05: lotto.o hw05.cpp hw05.h
	$(CC) hw05.cpp -o hw05 lotto.o

lotto.o: lotto.cpp hw05.h
	$(CC) -c lotto.cpp -o lotto.o

clean: 
	rm hw05 *.o

tar:
	tar cf hw05.tar hw05.src Makefile question.txt hw05.cpp hw05.h lotto.cpp 
