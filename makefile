CC=gcc
AR=ar
FLAGS= -Wall -g

all: libmyMath.so libmyMath.a mains maind
mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a 
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
libmyMath.so: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o
libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c myMath.h
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c myMath.h
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c 	

.PHONY: clean all 

clean:
	rm -f *.o *.a *.so *.gch mains maind 
