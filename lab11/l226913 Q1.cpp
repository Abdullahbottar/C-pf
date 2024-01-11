//#include <iostream>
//using namespace std;
//void rotatedata(int arr[][5])
//{
//	int pretemp = arr[4][0];
//	int i = 4;
//	for (int j = 0; j < 4; j++)
//	{
//		int temp = arr[i][j + 1];
//		arr[i][j + 1] = pretemp;
//		pretemp = temp;
//	}
//	cout << pretemp << endl;
//	int j = 4;
//	for (i = 4; i > 0; i--)
//	{
//		int temp = arr[i-1][j];
//		arr[i-1][j] = pretemp;
//		pretemp = temp;
//	}
//	cout << pretemp << endl;
//	i = 0;
//	for (j = 4; j > 0; j--)
//	{
//		int temp = arr[i][j-1];
//		arr[i][j -1] = pretemp;
//		pretemp = temp;
//	}
//	cout << pretemp << endl;
//	j = 0;
//	for (i = 0; i < 4; i++)
//	{
//	    int temp = arr[i + 1][j];
//		arr[i + 1][j] = pretemp;
//		pretemp = temp;
//	}
//	cout << endl;
//	cout << "The 2D array is:" << endl;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "   ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int arr[5][5];
//	cout << "Enter array values:" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "Enter the element at row " << (i + 1) << " column " << (j + 1) << " :";
//			cin >> arr[i][j];
//		}
//	}
//	cout << endl;
//	cout << "The 2D array is:" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "   ";
//		}
//		cout << endl;
//	}
//	rotatedata(arr);
//	return 0;
//}