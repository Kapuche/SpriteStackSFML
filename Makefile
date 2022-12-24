CC = g++
CXXFLAGS = -W -Wall -g
LDLIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all : spritestack

spritestack : main.o engine.o input.o update.o draw.o
	$(CC) $^ $(CXXFLAGS) -o $@ $(LDLIBS)

main.o : main.cpp engine.h
engine.o : engine.cpp engine.h 
input.o : input.cpp engine.h
update.o : update.cpp engine.h
draw.o : draw.cpp engine.h

.PHONY : clean
clean : 
	rm -rf *.o spritestack
