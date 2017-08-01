# This is the compiler.
CXX=clang++

# These are the flags.
CFLAGS=-c -std=c++14 -Wall -Wextra -I ~/Downloads/emsdk-portable/emscripten/1.37.16/system/include
LDFLAGS=

# These are the source files.
SOURCES=src/main.cpp
OBJECTS=$(SOURCES:.cpp=.o)

# Executable.
EXECUTABLE=output/cppclangtut

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm output/cppclangtut $(OBJECTS)
