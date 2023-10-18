#pragma once

#ifndef OSHAPE_H
#define OSHAPE_H

#include "Figure2D.h"

class Oshape final:
    public Figure2D
{
private:
    char shapeO[size][size];

public:
    Oshape() : Figure2D(shapeO),
        shapeO{
        { '*', '*', ' ', ' ' }, 
        { '*', '*', ' ', ' ' },
        { ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ' } 
        } 
    {}
}
;
#endif