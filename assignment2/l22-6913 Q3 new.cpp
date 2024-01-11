//#include <iostream>
//using namespace std;
//int main()
//{
//	int col, row;
//	char c = 'A';
//	cout << "Enter the value of columns you want do not exceed 26:";
//	cin >> col;
//	cout << "Enter the number of rows you wnat:";
//	cin >> row;
//	if (col < 0 || col>26)
//	{
//		while (col < 0 || col>26)
//		{
//			cout << "Enter the correct value of colums:";
//			cin >> col;
//		}
//	}
//	if (row < 0)
//	{
//		while (row < 0)
//		{
//			cout << "Enter the correct value of rows:";
//			cin >> row;
//		}
//	}
//	for (int i = 1; i <= row; i++)
//	{
//		int c = 97;
//		if (i % 2 != 0)
//		{
//			for (int k = 1; k <= col; k++)
//			{
//				if (i % 2 != 0)
//				{
//					char val = char(c);
//					cout << val << " ";
//					++c;
//				}
//			}
//			cout << endl;
//		}
//		if (i % 2 == 0)
//		{
//			for (int k = 1; k <= col; k++)
//			{
//				cout << k << " ";
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}