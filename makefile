CXX=clang++
objects=main.o

hello: $(objects)
	$(CXX) -o hello $(objects)

main.o: main.h

.PHONY: clean

clean:
	rm hello $(objects)
