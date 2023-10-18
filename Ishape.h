#pragma once

#ifndef ISHAPE_H
#define ISHAPE_H

#include "Figure2D.h"

class Ishape final:
    public Figure2D
{
private:
    char shapeI[size][size];

public:
    Ishape() : Figure2D(shapeI),
        shapeI{
        { '*', ' ', ' ', ' ' },
        { '*', ' ', ' ', ' ' },
        { '*', ' ', ' ', ' ' },
        { '*', ' ', ' ', ' ' }
    }
    {}
}
;
#endif