#include <iostream>
using namespace std;
int main()
{
	int col, row;
	char c = 'A';
	cout << "Enter the value of columns you want do not exceed 26:";
	cin >> col;
	cout << "Enter the number of rows you wnat:";
	cin >> row;
	if (col < 0 || col>26)
	{
		while (col < 0 || col>26)
		{
			cout << "Enter the correct value of colums:";
			cin >> col;
		}
	}
	if (row < 0)
	{
		while (row < 0)
		{
			cout << "Enter the correct value of rows:";
			cin >> row;
		}
	}
	int f = 1;
	if (row % 2 == 0)
	{
		for (int i = 1; i <= (row % 2); i++)
		{
			for (int j = 1; j <= col; j++)
			{
				cout << c << " ";
				c++;
			}
			cout << endl;
			for (int j = 1; j <= col; j++)
			{
				cout << f << " ";
				++f;
			}
			cout << endl;
		}
	}

	return 0;
}

