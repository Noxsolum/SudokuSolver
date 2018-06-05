#include <iostream>
#include <string>
#include <fstream>
#include "GetSudoku.h"

using namespace std;

void getSudoku();

class solver
{

};

int main()
{
	GetSudoku sudokuObj;
	sudokuObj.printSudoku();
	sudokuObj.checkBox();
	sudokuObj.getPlace();
	system("pause");
	return 0;
}