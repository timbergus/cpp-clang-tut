# This is the compiler.
CXX=clang++

# These are the flags.
CFLAGS=-c -std=c++14 -Wall -Wextra
LDFLAGS=

# These are the source files.
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)

# Executable.
EXECUTABLE=cppclangtut

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm cppclangtut $(OBJECTS)
