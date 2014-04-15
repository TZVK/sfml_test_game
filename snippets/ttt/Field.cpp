#include "Field.h"

Field::Field(){
    this->columnSize = 3; //Magic Numbers FTW
    this->lineSize = 3;  //3 because there are 3 Tiles in Tic Tac Toe
    this->tiles = std::vector<Sign>(columnSize*lineSize,Sign::EMPTY);
}

Field::Field(int columns, int lines){
    this->columnSize = columns;
    this->lineSize = lines;
    this->tiles = std::vector<Sign>(columnSize*lineSize,Sign::EMPTY);
}

Field::Field(int columns, int lines, Sign sign){
    this->columnSize = columns;
    this->lineSize = lines;
    this->tiles = std::vector<Sign>(columnSize*lineSize, sign);
}

Field::~Field(){

}


