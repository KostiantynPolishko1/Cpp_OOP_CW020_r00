#pragma once

#ifndef TSHAPE_H
#define TSHAPE_H

#include "Figure2D.h"

class Tshape final:
    public Figure2D
{
private:
    char shapeT[size][size];

public:
    Tshape() : Figure2D(shapeT),
        shapeT{
        { ' ', '*', ' ', ' ' },
        { '*', '*', '*', ' ' },
        { ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ' }
    }
    {}
}
;
#endif