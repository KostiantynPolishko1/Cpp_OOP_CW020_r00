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
    /*Square() : Figure2D()
    {
        this->figure = new char* [4];
        for (size_t i = 0; i < 4; i++)
        {
            figure[i] = new char[4];
        }

        for (size_t i = 0; i < 2; i++)
            for (size_t j = 0; j < 2; j++)
                figure[i][j] = '*';

    }*/

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