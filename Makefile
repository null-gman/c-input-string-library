cc := gcc
testing := ./bin/test.exe
headers := -I./headers/
cflages := -Wall -Wextra



all :  $(testing)

$(testing) : ./objs/test.o ./objs/inputStrLib.o
	$(cc) -o $@ $^

./objs/test.o  : ./testSrc/test.c
	$(cc) -c $(cflages)  -o $@ $^  $(headers)

./objs/inputStrLib.o : ./src/inputStrLib.c
	$(cc) -c $(cflages)  -o $@ $^  $(headers)


playTest:
	$(testing)

clean:
	rm -rf ./bin/* ./objs/*
