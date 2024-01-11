//#include <iostream>
//using namespace std;
//void trace(int arr1[])
//{
//	int arr[100][100];
//	int row, col;
//	cout << "Enter the rows of array:";
//	cin >> row;
//	cout << "Enter the columns of the array:";
//	cin >> col;
//	if (row < 0)
//	{
//		while (row < 0)
//		{
//			cout << "Enter the correct number of rows:";
//			cin >> row;
//		}
//	}
//	if (col < 0)
//	{
//		while (col < 0)
//		{
//			cout << "Enter the correct number of columns foe the array:";
//			cin >> col;
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << "Enter the component of array at " << i << " row and " << j << " column: ";
//			cin >> arr[i][j];
//		}
//	}
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
//			if (i == j)
//			{
//				sum = sum + arr[i][j];
//			}
//		}
//	}
//	cout << "The trace of the matrix is :" << sum << endl;
//}
//int main()
//{
//	int arr[100];
//	trace(arr);
//	
//	return 0;
//}