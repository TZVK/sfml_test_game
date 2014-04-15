#pragma once
#include <vector>
#include "Sign.h"

class Field {
    private:
    std::vector<Sign> tiles;

    public:
    Sign getSign(int x, int y);

};
