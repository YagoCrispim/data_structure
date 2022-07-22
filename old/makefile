PROJ_NAME=data_structures
all: objFolder $(PROJ_NAME)

$(PROJ_NAME): ./dist/main.o ./dist/menu.o
	g++ -o ./dist/$(PROJ_NAME) ./dist/main.o ./dist/menu.o

./dist/main.o: main.cpp ./stack/headers/menu.h
	g++ -c -o ./dist/main.o main.cpp

./dist/menu.o: ./stack/menu.cpp ./stack/headers/menu.h
	g++ -c -o ./dist/menu.o ./stack/menu.cpp

objFolder:
	@ mkdir -p dist

clean:
	rm -rf *.o *~ $(PROJ_NAME)

