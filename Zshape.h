#pragma once

#ifndef ZSHAPE_H
#define ZSHAPE_H

#include "Figure2D.h"

class Zshape final:
    public Figure2D
{
private:
    char shapeZ[size][size];

public:
    Zshape() : Figure2D(shapeZ),
        shapeZ{
        { '*', '*', ' ', ' ' },
        { ' ', '*', '*', ' ' },
        { ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ' }
    }
    {}
}
;
#endif