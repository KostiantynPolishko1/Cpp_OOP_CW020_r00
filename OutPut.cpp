#include "OutPut.h"

void showFigure(const char* arr, const short sizeRow, const short sizeCol)
{
	for (short i = 0; i < sizeRow; i++) {
		for (short j = 0; j < sizeCol; j++)
			cout << *(arr++);
		cout << "\n";
	}
}
;
void printMenu(std::string* arr, const short size, std::string nameMenu, const short& indMenu) {

    cout << "\n MENU: " << nameMenu << "\n";

    for (short i = 0; i < size; i++) {
        if (indMenu == i) {
            cout << " -> " << *(arr + i) << "\n";
            continue;
        }
        cout << "    " << *(arr + i) << "\n";
    }
}
;
short indexMenu(short& indMenu, const short size) {

    short indMin{};
    char direct{};

    cout << " w|s - down | up: -> ";
    direct = cin.get();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    system("CLS");

    while (true) {

        if (direct == '\n' && indMenu == EXIT)
            return EXIT;
        else if (direct == 'w' || direct == 'W')
            indMenu++;
        else if (direct == 's' || direct == 'S')
            indMenu--;
        else if (direct == '\n' && indMenu == W_NEXT)
            return W_NEXT;
        else if (direct == '\n' && indMenu == S_PREVIOUS)
            return S_PREVIOUS;
        else
            cout << "\n\t!ERROR!";

        //reload index menu
       if (indMenu < indMin)
            indMenu = size-1;
        else if (indMenu == size)
            indMenu = indMin;

        return -1;
    }
}
;