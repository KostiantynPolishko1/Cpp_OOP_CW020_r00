#include "OutPut.h"
#include "Tetromino.h"

int main()
{
	Tetromino tetris;
	cout << "\n\tshapeO\n";
	showFigure(tetris[0].getPtrFigure(), tetris[0].getSize(), tetris[0].getSize());

	return 0;
}
;