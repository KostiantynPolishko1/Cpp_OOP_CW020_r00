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