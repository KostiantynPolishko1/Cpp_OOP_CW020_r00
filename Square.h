#pragma once

#ifndef SQUARE_H
#define SQUARE_H

#include "Figure2D.h"

class Square final:
    public Figure2D
{
private:
    char square[size][size];

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

    Square() : Figure2D(square),
        square{
        { '*', '*', ' ', ' ' }, 
        { '*', '*', ' ', ' ' },
        { ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ' } 
        } 
    {}
}
;
#endif