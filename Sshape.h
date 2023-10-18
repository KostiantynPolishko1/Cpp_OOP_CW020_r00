#pragma once

#ifndef SSHAPE_H
#define SSHAPE_H

#include "Figure2D.h"

class Sshape final:
    public Figure2D
{
private:
    char shapeS[size][size];

public:
    Sshape() : Figure2D(shapeS),
        shapeS{
        { ' ', '*', '*', ' ' },
        { '*', '*', ' ', ' ' },
        { ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ' }
    }
    {}
}
;
#endif