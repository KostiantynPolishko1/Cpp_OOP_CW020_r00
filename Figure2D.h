#pragma once

#ifndef FIGURE2D_H
#define FIGURE2D_H

class Figure2D
{
private:
	Figure2D() : figure{}, rotate{} {}

protected:
	char* figure;
	short rotate;
	const static short size = 4;

	Figure2D(char figure[size][size]) : rotate{}
	{
		this->figure = &figure[0][0];
		figure = nullptr;
	}

public:
	char* getFigure() const {
		return this->figure;
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