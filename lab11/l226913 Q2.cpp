//#include <iostream>
//using namespace std;
//void trace(int arr[][100])
//{
//	cout << "The 2D array is:" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	cout << "The trace of matrix is: " << sum << endl;
//}
//int main()
//{
//	int arr[100][100];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "Enter the element at row " << (i + 1) << " column " << (j + 1) << " :";
//			cin >> arr[i][j];
//		}
//	}
//	cout << endl;
//	trace(arr);
//
//	return 0;
//}