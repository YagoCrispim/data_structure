all: data_structures

data_structures: menu.o main.o
	g++ -o data_structures menu.o main.o

menu.o: ./stack/menu.cpp ./stack/menu.h
	g++ -c -Wall -Werror -std=c++11 ./stack/menu.cpp

main.o: main.cpp ./stack/menu.h
	g++ -c -Wall -Werror -std=c++11 main.cpp

clean:
	rm -rf *.o *~ data_structures
