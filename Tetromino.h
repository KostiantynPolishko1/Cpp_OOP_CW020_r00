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
	short index;
	Figure2D tetFigure[count];
	Oshape shapeO;
	Lshape shapeL;
	Jshape shapeJ;

public:
	Tetromino() : index{0}, shapeO {}, shapeL{}, shapeJ{}
	{
		tetFigure[0] = shapeO.getFigure2D();
		tetFigure[1] = shapeL.getFigure2D();
		tetFigure[2] = shapeJ.getFigure2D();
	}

#pragma region operators
	const Figure2D& operator[] (const short index)
	{
		//this->index = index;
		return this->tetFigure[this->index];
	}

	Tetromino& operator++() {
		this->index++;
		setIndex0();
		return *this;
	}

	Tetromino& operator--() {
		this->index--;
		setIndex0();
		return *this;
	}
#pragma endregion

#pragma region methods
	void setIndex0() 
	{
		if (this->index == count || this->index < 0)
			this->index = 0;
	}

	short getIndex() const {
		return this->index;
	}

	Figure2D getTetFigure()
	{
		return this->tetFigure[this->index];
	}
#pragma endregion
}
;
#endif