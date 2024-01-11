//#include <iostream>
//using namespace std;
//void display(int arr[][100], int row, int col)
//{
//	cout << "The 2D array is:" << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int k = (row / 2);
//	int h = (col / 2);
//	cout << "The middle row is:";
//	for (int j = 0; j < col; j++)
//	{
//		cout << arr[k][j] << " ";
//	}
//	cout << endl;
//	cout << "The middle column is:";
//	for (int i = 0; i < row; i++)
//	{
//		cout << arr[i][h] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	int arr[100][100];
//	int col, row;
//	cout << "Enter the number of rows:";
//	cin >> row;
//	cout << "Enter the number of columns:";
//	cin >> col;
//	if (row < 0|| row %2 == 0)
//	{
//		while (row < 0 || row%2 == 0)
//		{
//			cout << "Enter the correct value of rows:";
//			cin >> row;
//		}
//	}
//	if (col < 0 || col%2 == 0)
//	{
//		while (col < 0 || col %2 == 0)
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
//	display(arr, row, col);
//	return 0;
//}