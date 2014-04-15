#pragma once
#include <vector>
#include "Sign.h"

class Field {
    private:
    std::vector<Sign> tiles;
    int columnSize;
    int lineSize;

    public:
    Field(); //size of field parameter...
    Field(int columns, int lines);
    Field(int columns, int lines, Sign sing);
    ~Field();
    inline Sign getSignAt(int x, int y) {return tiles.at(y*columnSize+x); }
    inline void setSignAt(int x, int y, Sign sign){tiles.at(y*columnSize+x) = sign; }
    inline bool isSignAt(int x, int y) { return (getSignAt(x,y) != Sign::EMPTY); }
};
