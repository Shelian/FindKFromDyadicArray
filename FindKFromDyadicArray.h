#include <iostream>
using namespace std;


bool FindKFromDyadicArray(int* matrix, int Row, int Col, int num)
{
	int curRow = 0;
	int curCol = Col - 1;

	//�ڶ�λ�����в���ֵ
	while (curRow >= 0 && curCol < Col)
	{
		if (num < matrix[curRow*Col + curCol])
		{
			curCol--;
		}

		else if (num > matrix[curRow*Col + curCol])
		{
			curRow++;
		}

		else
		{
			return true;
		}
	}
	return false;
}