//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//	int arr1[100][100];
//	int arr2[100][100];
//	int r, c;
//	cout << "Enter the rows:";
//	cin >> r;
//	cout << "Enter the columns:";
//	cin >> c;
//	if (r < 0)
//	{
//		while (r < 0)
//		{
//			cout << "Enter correct number of rows:";
//			cin >> r;
//		}
//	}
//	if (c < 0)
//	{
//		while (c < 0)
//		{
//			cout << "Enter correct number of columns:";
//			cin >> c;
//		}
//	}
//	cout << "For array 1" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter array 1 component:";
//			cin >> arr[i][j];
//		}
//	}
//	cout << "For array 2" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter array 2 component:";
//			cin >> arr1[i][j];
//		}
//	}
//	cout << "array 1 is:" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "array 2 is:" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "The addition of two arrays is:" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			arr2[i][j] = arr[i][j] + arr1[i][j];
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}