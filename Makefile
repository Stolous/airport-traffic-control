EXEC=bin/atc

all: atc

atc: directories
	g++ -o bin/atc src/*.cc -l fltk -ggdb

run: all
	bin/atc

directories:
	mkdir -p bin
