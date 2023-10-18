#include "OutPut.h"
#include "Tetromino.h"

int main()
{
	short indMenu{}, indFigure{};
	std::string arrMenu[] = { "Next", "Previous", "Exit" };

	Tetromino tetris;
	showFigure(tetris[0].getPtrFigure(), tetris[0].getSize(), tetris[0].getSize());

	do {
		printMenu(arrMenu, size(arrMenu), "NextPrevious", indMenu);
		indFigure = indexMenu(indMenu, size(arrMenu));
		system("CLS");

		if (indFigure == W_NEXT)
			++tetris;
		else if (indFigure == S_PREVIOUS)
			--tetris;
		showFigure(tetris[0].getPtrFigure(), tetris[0].getSize(), tetris[0].getSize());

	} while (static_cast<char>(indFigure) != EXIT);

	return 0;
}
;