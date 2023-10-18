#pragma once

#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
using std::cout;
using std::cin;

enum MENU {
	W_NEXT,
	S_PREVIOUS,
	EXIT
}
;
void showFigure(const char*, const short, const short)
;
void printMenu(std::string* arr, const short, std::string, const short&)
;
short indexMenu(short&, const short)
;
#endif