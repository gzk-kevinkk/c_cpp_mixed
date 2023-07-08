_prog = main main2

add: add.cc add.h
	g++ -c add.cc -fPIC
	ar -r libadd.a add.o

main: main.cc libadd.a 
	g++ -o main main.cc -L./ -ladd

main2: main2.c libadd.a 
	gcc -o main2 main2.c -L./ -ladd -lstdc++

clean:
	rm -r *.o *.a $(_prog)

.PHONY: clean main