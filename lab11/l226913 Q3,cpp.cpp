//#include <iostream>
//using namespace std;
//void maxcol(int arr[][100],int row,int col)
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
//	int arr1[100];
//	int k = 0;
//	int max = INT_MIN;
//	for (int j = 0; j < col; j++)
//	{
//		max = INT_MIN;
//		for (int i = 0; i < row; i++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//		arr1[k] = max;
//		k++;
//	}
//	arr1[k] = '\0';
//	cout << "The maximum value in all columns is:";
//	for (int i = 0; i < k; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//}
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
//	maxcol(arr, row, col);
//	return 0;
//	
//}