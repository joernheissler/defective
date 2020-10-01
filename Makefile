all: defective

defective: defective.o
	gcc -o $@ $^

%.o: %.c
	gcc -c -o $@ $<
