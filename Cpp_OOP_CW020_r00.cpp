#include "OutPut.h"
#include "Square.h"

int main()
{
	Square square;
	cout << "\n\tSquare\n";
	showFigure(square.getFigure(), square.getSize(), square.getSize());

	return 0;
}
;