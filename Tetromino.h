#pragma once

#ifndef TETROMINO_H
#define TETROMINO_H

#include "Jshape.h"
#include "Ishape.h"
#include "Oshape.h"
#include "Lshape.h"
#include "Zshape.h"
#include "Tshape.h"
#include "Sshape.h"

class Tetromino
{
private:
	const static short count = 7;
	short index;
	Figure2D tetFigure[count];
	Jshape shapeJ;
	Ishape shapeI;
	Oshape shapeO;
	Lshape shapeL;
	Zshape shapeZ;
	Tshape shapeT;
	Sshape shapeS;

public:
	Tetromino() : index{0}, shapeJ {}, shapeI{}, shapeO{}, shapeL{}, shapeZ{}, shapeT{}, shapeS{}
	{
		tetFigure[0] = shapeJ.getFigure2D();
		tetFigure[1] = shapeI.getFigure2D();
		tetFigure[2] = shapeO.getFigure2D();
		tetFigure[3] = shapeL.getFigure2D();
		tetFigure[4] = shapeZ.getFigure2D();
		tetFigure[5] = shapeT.getFigure2D();
		tetFigure[6] = shapeS.getFigure2D();
	}

#pragma region operators
	const Figure2D& operator[] (const short& index)
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
		if (this->index == count)
			this->index = 0;
		else if (this->index < 0)
			this->index = count - 1;
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