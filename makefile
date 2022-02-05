CXX = g++
SRC = $(wildcard *.cpp)
BIN = bin\debug.exe
LINK = -I include -Llib -lmingw32 -lSDL2main -lSDL2

build: main.cpp
	$(CXX) $(SRC) -o $(BIN) $(LINK)

run: $(BIN)
	$(BIN)

$(BIN): 
	make build

build-ios : 
	clear && clang++ -Wall *.c -o bin/debug -I ./include -I ./SDL2.framework/Headers -F ./ -framework SDL2
run-ios : 
	clear && ./bin/debug