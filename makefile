all: main.c
	gcc -o str_test main.c
run: all
	./str_test
