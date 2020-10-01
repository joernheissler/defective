all: defective

defective: defective.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c -o $@ $<
