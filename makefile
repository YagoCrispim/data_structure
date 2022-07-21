all: data_structures

data_structures: menu.o main.o
	g++ -o data_structures menu.o main.o

menu.o: ./stack/menu.cpp ./stack/menu.h
	g++ ./stack/menu.cpp ./stack/menu.h -o menu.o

main.o: main.cpp ./stack/menu.h
	g++ ./stack/menu.h main.cpp -o main.o

clean:
	rm -rf *.o *~ data_structures
