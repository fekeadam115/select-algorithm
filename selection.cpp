#include <iostream>
#include <conio.h>
#include "selection.h"
using namespace std;

int Selection(char* pos, int& x)
{
	char keyPressed;
	const int arraySize = sizeof(pos);
	int last = sizeof(pos);
	keyPressed = _getch();
	system("CLS");

	if (keyPressed == 's')
	{
		x++;
		if (x < arraySize + 1)
		{
			pos[x] = '<';
			pos[x - 1] = ' ';
		}
		else
		{
			pos[0] = '<';
			pos[arraySize] = ' ';
			x = 0;
		}
	}
	else if (keyPressed == 'w')
	{
		x--;
		if (x > -1)
		{
			pos[x] = '<';
			pos[x + 1] = ' ';
		}
		else
		{
			pos[arraySize] = '<';
			pos[0] = ' ';
			x = last;
		}
	}
	else if (keyPressed == '\r')
	{
		return x;
	}

	return 99;
}