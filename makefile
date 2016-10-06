# This is the compiler.
CXX=clang++

# These are the flags.
CFLAGS=-c -Wall -Wextra
LDFLAGS=

# These are the source files.
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)

# Executable.
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm hello $(OBJECTS)
