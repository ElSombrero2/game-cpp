CXX = g++
SRC = $(wildcard *.cpp)
BIN = bin\debug.exe
LINK = -I include -Llib -lmingw32 -lSDL2main -lSDL2

build: main.cpp
	$(CXX) $(SRC) -o $(BIN) $(LINK)

build-ios

run: $(BIN)
	$(BIN)

$(BIN): 
	make build