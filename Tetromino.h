#pragma once

#ifndef TETROMINO_H
#define TETROMINO_H

#include "Oshape.h"
#include "Jshape.h"
#include "Lshape.h"

class Tetromino
{
private:
	const static short count = 3;
	Figure2D tetFigure[count];
	Oshape shapeO;
	Lshape shapeL;
	Jshape shapeJ;

public:
	Tetromino() : shapeO{}, shapeL{}, shapeJ{}
	{
		tetFigure[0] = shapeO.getFigure2D();
		tetFigure[1] = shapeL.getFigure2D();
		tetFigure[2] = shapeJ.getFigure2D();
	}

#pragma region operators
	const Figure2D& operator[] (const short index) const {
		return this->tetFigure[index];
	}
}
;
#endif