//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//	int row;
//	cout << "Enter the rows of arrays:";
//	cin >> row;
//	int cols;
//	cout << "Enter the columns of arrays:";
//	cin >> cols;
//	if (row < 0)
//	{
//		while (row < 0)
//		{
//			cout << "Enter correct number rows of arrays:";
//			cin >> row;
//		}
//	}
//	if (cols < 0)
//	{
//		while (cols < 0)
//		{
//			cout << "Enter the correct number of columns of arrays:";
//			cin >> cols;
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << "Enter the array component at row " << i << " and column " << j << " :";
//			cin >> arr[i][j];
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "The sum of array per row is:";
//	cout << endl;
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < cols; j++)
//		{
//			sum = sum + arr[i][j];
//		}
//		cout << "The sum at row " << i << " is: " << sum << endl;
//	}
//	cout << "The highest sum is: " << endl;
//	int arr1[100];
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < cols; j++)
//		{
//			sum = sum + arr[i][j];
//		}
//		arr1[i] = sum;
//	}
//	for (int i = 0; i < row; i++)
//	{
//		int temp = 0;
//		for (int i = 0; i < row - 1; i++)
//		{
//			if (arr1[i] < arr1[i + 1])
//			{
//				temp = arr1[i];
//				arr1[i] = arr1[i + 1];
//				arr1[i + 1] = temp;
//			}
//		}
//	}
//	cout << "Array sum in ascending order is:";
//	for (int i = 0; i < row ; i++)
//	{
//		cout << arr1[i];
//		cout << endl;
//	}
//
//	return 0;
//	
//	
//}