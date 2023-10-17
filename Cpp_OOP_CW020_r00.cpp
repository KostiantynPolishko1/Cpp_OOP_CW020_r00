#include "OutPut.h"
#include "Oshape.h"
#include "Jshape.h"
#include "Lshape.h"

int main()
{
	Oshape shapeO;
	cout << "\n\tshapeO\n";
	showFigure(shapeO.getFigure(), shapeO.getSize(), shapeO.getSize());

	Jshape shapeJ;
	cout << "\n\tshapeJ\n";
	showFigure(shapeJ.getFigure(), shapeJ.getSize(), shapeJ.getSize());

	Lshape shapeL;
	cout << "\n\tshapeJ\n";
	showFigure(shapeL.getFigure(), shapeL.getSize(), shapeL.getSize());

	return 0;
}
;