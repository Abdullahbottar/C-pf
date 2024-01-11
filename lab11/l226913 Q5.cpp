//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//	int row, col;
//	cout << "Enter the number of rows:";
//	cin >> row;
//	cout << "Enter the number of columns:";
//	cin >> col;
//	if (row < 0)
//	{
//		while (row < 0)
//		{
//			cout << "Enter the correct value of rows:";
//			cin >> row;
//		}
//	}
//	if (col < 0)
//	{
//		while (col < 0)
//		{
//			cout << "Enter the correct value of column:";
//			cin >> col;
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << "Enter the element at row " << (i + 1) << " column " << (j + 1) << " :";
//			cin >> arr[i][j];
//		}
//	}
//	cout << endl;
//	cout << "The 2D array is:" << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int sum = 0;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			sum = sum + arr[i][j];
//		}
//		cout << "The sum of " << (i + 1) << " row is:" << sum << endl;
//		sum = 0;
//	}
//	cout << endl;
//	for (int j = 0; j < col; j++)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			sum = sum + arr[i][j];
//		}
//		cout << "The sum of " << (j + 1) << " column is:" << sum << endl;
//		sum = 0;
//	}
//	cout << endl;
//	return 0;
//
//}