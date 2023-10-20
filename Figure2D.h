#pragma once

#ifndef FIGURE2D_H
#define FIGURE2D_H

class Figure2D
{
private:

protected:
	char* prtFigure;
	short rotate;
	const static short size = 4;

public:
	Figure2D() : prtFigure{}, rotate{} {}

	Figure2D(char figure[size][size]) : rotate{}
	{
		this->prtFigure = &figure[0][0];
		figure = nullptr;
	}

	~Figure2D() {
		prtFigure = nullptr;
	}

public:
	char* getPtrFigure() const {
		return this->prtFigure;
	}

	Figure2D getFigure2D() const {
		return *this;
	}

	short getSize() const {
		return this->size;
	}

	void setRotate(short rotate) {
		this->rotate = rotate;
	}
}
;
#endif