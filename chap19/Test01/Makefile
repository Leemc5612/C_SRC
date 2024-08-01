app.out : a.o b.o main.o	
	gcc a.o b.o main.o -o app.out
main.o 	:	
	gcc -c main.c -o main.o
a.o : a.c
	gcc -c a.c -o a.o

b.o : b.c
	gcc -c b.c -o b.