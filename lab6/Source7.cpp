//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	int rows, colums;
//	cout << "Enter the number of columns you want. it should not exceed 26:";
//	cin >> colums;
//	cout << "Enter the number of rows:";
//	cin >> rows;
//	char arr[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0' };
//	int c = 0;
//	int arr1[26];
//	for (int y = 1; y <= 26; ++y)
//	{
//		arr1[c] = y;
//		++c;
//	}
//	if (rows % 2 == 0)
//	{
//		for (int k = 0; k < rows/2; k++)
//		{
//			for (int i = 0; i < colums; ++i)
//			{
//				cout << arr[i];
//			}
//			cout << endl;
//			for (int j = 0; j < colums; ++j)
//			{
//				cout << arr1[j];
//			}
//			cout << endl;
//		}
//	}
//	else
//	{
//		for (int k = 0; k < rows / 2; k++)
//		{
//			for (int i = 0; i < colums; ++i)
//			{
//				cout << arr[i];
//			}
//			cout << endl;
//			for (int j = 0; j < colums; ++j)
//			{
//				cout << arr1[j];
//			}
//			cout << endl;
//		}
//		for (int i = 0; i < colums; ++i)
//		{
//			cout << arr[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}