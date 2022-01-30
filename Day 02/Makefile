CXX		  := g++
CXX_FLAGS := -std=c++17

BIN		:= bin
SRC		:= src
INCLUDE	:= include

EXECUTABLE	:= day02


all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cc
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ 

clean:
	-rm $(BIN)/*