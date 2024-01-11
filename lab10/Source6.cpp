//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char arr[5][30];
//	cout << "enter the array:" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "enter the word at index " << i + 1 << " :";
//		cin >> arr[i];
//	}
//	char arr1[10];
//	int arr2[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 30; j++)
//		{
//			if (arr[i][j] == '\0')
//			{
//				break;
//			}
//			else
//			{
//				arr2[i]++;
//			}
//		}
//	}
//	int count = 0;
//	int s = 1;
//	int index = 0;
//	int v = 0;
//	int pre = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		i = 0;
//		count = 0;
//		for (int j = v; j < s; j++)
//		{
//			for (int k = i + 1; k < 5; k++)
//			{
//				for (int l = v; l < s; l++)
//				{
//					if (arr[i][j] == arr[k][l])
//					{
//						count++;
//					}
//				}
//			}
//			pre = s;
//			if (count == (5 - (i + 1)))
//			{
//				char c = arr[i][j];
//				cout << c;
//				arr1[index] = c;
//				cout << arr1[index] << endl;
//				++index;
//				v = s;
//				s = s + 1;
//			}
//			if (s == 1)
//			{
//				cout << "NO PREFEXIS" << endl;
//				break;
//			}
//			if (s == v)
//			{
//				break;
//			}
//		}
//	}
//	arr1[index] = '\0';
//	cout << index << endl;
//	for (int i = 0; i < index; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
