CXX ?= g++
CXXFLAGS = -Wall -O2

.PHONY: all run clean

all: build
	$(CXX) $(CXXFLAGS) -o build/bin/main src/*.cpp

run:
	./build/bin/main

clean:
	rm -r build

build:
	mkdir -p build/bin