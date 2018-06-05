#pragma once
#ifndef GETSUDOKU_H
#define GETSUDOKU_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class GetSudoku
{
public:
	GetSudoku();
	~GetSudoku();

	void printSudoku();

	void checkBox();

	void getPlace();

	void checkPlace(int row, int col, int numTF);


private:
	const int arraySize = 9;
	int sudokuArray[9][9];
	int boxOneArray[9][9];
	int boxOne = 3;
	int xAxisL = 0;
	int yAxisL = 0;
	int xAxisH = 3;
	int yAxisH = 3;

};
#endif