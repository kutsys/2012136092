mtest: mtest.o foo.o boo.o bar.o
	gcc -o mtest mtest.o foo.o boo.o bar.o

mtest.o : mtest.h mtest.c
	gcc -g -c mtest.c

foo.o : mtest.h foo.c
	gcc -g -c foo.c

boo.o : mtest.h boo.c
	gcc -g -c boo.c

bar.o : mtest.h bar.c
	gcc -g -c bar.c
