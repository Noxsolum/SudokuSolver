#include "GetSudoku.h"

GetSudoku::GetSudoku()
{
	int x = 0;
	ifstream sudokuFile;
	sudokuFile.open("..\\Sudoku_1.txt");
	string row;
	for (row; getline(sudokuFile, row);)
	{
		istringstream in(row);
		int num[9];
		for (int a = 0; a < 9; a++)
		{
			in >> num[a];
			sudokuArray[x][a] = num[a];
		}
		x++;
	}
}

GetSudoku::~GetSudoku() {}

void GetSudoku::printSudoku()
{
	for (int x = 0; x < 9; x++)
	{
		for (int y = 0; y < 9; y++)
		{
			cout << sudokuArray[x][y] << " ";
		}
		cout << endl;
	}
}

void GetSudoku::checkBox()
{
	//int iterate = 0;
	bool numberFound = false;
	for (int w = 0; w < 9; w++)
	{
		int iterate = 0;
		for (int x = 1; x <= 9; x++)
		{
			for (int y = xAxisL; y < xAxisH; y++)
			{
				for (int z = yAxisL; z < yAxisH; z++)
				{
					if (sudokuArray[y][z] == x)
					{
						numberFound = true;
					}
				}
			}

			if (numberFound == false)
			{
				boxOneArray[iterate][w] = x;
				iterate++;
			}
			else
			{
				numberFound = false;
			}
		}
		for (int n = 0; n < 9; n++)
		{
			cout << boxOneArray[n][w] << " ";
		}

		switch (w)
		{
		case 0:
			xAxisL += 3;
			xAxisH += 3;
			break;
		case 1:
			xAxisL += 3;
			xAxisH += 3;
			break;
		case 2:
			xAxisL -= 6;
			xAxisH -= 6;
			yAxisL += 3;
			yAxisH += 3;
			break;
		case 3:
			xAxisL += 3;
			xAxisH += 3;
			break;
		case 4:
			xAxisL += 3;
			xAxisH += 3;
			break;
		case 5:
			xAxisL -= 6;
			xAxisH -= 6;
			yAxisL += 3;
			yAxisH += 3;
			break;
		case 6:
			xAxisL += 3;
			xAxisH += 3;
			break;
		case 7:
			xAxisL += 3;
			xAxisH += 3;
			break;
		default:
			break;
		}
		cout << endl;
	}
}

void GetSudoku::placeNum()
{
	// check if a space is free
	// if not then next square
	// if true then check if can be placed
	int row = 0;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << sudokuArray[x][y] << endl;
			if (sudokuArray[x][y] == 0)
			{
				cout << "Second Part" << endl;
				for (int w = 0; w < 9; w++)
				{
					for (int z = 0; z < 9; z++)
					{
						if (sudokuArray[row][w] == boxOneArray[0][0] && sudokuArray[z][row] == boxOneArray[0][0])
						{
							cout << "Free to put it here" << endl;
						}
					}
				}
			}
			else
				break;
		}
	}

}