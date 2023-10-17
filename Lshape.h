#pragma once

#ifndef LSHAPE_H
#define LSHAPE_H

#include "Figure2D.h"

class Lshape final:
    public Figure2D
{
private:
    char shapeL[size][size];

public:
    Lshape() : Figure2D(shapeL),
        shapeL{
        { '*', ' ', ' ', ' ' },
        { '*', ' ', ' ', ' ' },
        { '*', '*', ' ', ' ' },
        { ' ', ' ', ' ', ' ' }
    }
    {}
}
;
#endif