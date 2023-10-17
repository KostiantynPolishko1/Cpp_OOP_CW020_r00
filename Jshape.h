#pragma once

#ifndef JSHAPE_H
#define JSHAPE_H

#include "Figure2D.h"

class Jshape final:
    public Figure2D
{
private:
    char shapeJ[size][size];

public:
    Jshape() : Figure2D(shapeJ),
        shapeJ{
        { ' ', '*', ' ', ' ' },
        { ' ', '*', ' ', ' ' },
        { '*', '*', ' ', ' ' },
        { ' ', ' ', ' ', ' ' }
    }
    {}
}
;
#endif