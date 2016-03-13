#ifndef __SLIDER_H_INCLUDED__
#define __SLIDER_H_INCLUDED__

#include <iostream>
#include <random>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;

class slider 
{
public:
	slider();
private:
	void initializeBoard();
	void printBoard();
	bool isBoardSolved();
	void slideTile(char move);
	void scrambleBoard();
	char pB[3][3];
	bool truths[3][3];
};
#endif
