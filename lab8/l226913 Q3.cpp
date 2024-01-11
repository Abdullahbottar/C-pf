//#include <iostream>
//using namespace std;
//void findindex(int arr[], int s, int j)
//{
//	cout << "Finding index at its first occurance." << endl;
//	for (int i = 0; i < s; i++)
//	{
//		if (j == -1)
//		{
//			break;
//		}
//		if (arr[i] == j)
//		{
//			cout << "The first occurance of " << j << " is " << i << endl;
//			break;
//		}
//	}
//}
//void lastindex(int arr[], int s, int j)
//{
//	cout << "Finding index at its last occurance." << endl;
//	int v = 0;
//	for (int i = 0; i < s; i++)
//	{
//		if (j == -1)
//		{
//			break;
//		}
//		if (arr[i] == j)
//		{
//			v = i;
//		}
//	}
//	cout << "The last occurance of " << j << " is " << v << endl;
//}
//int main()
//{
//	int arr[100];
//	int s;
//	cout << "Enter the size of array:";
//	cin >> s;
//	if (s < 0)
//	{
//		while (s < 0)
//		{
//			cout << "Enter the correct size of s:";
//			cin >> s;
//		}
//	}
//	cout << "Enter the array elements:" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << "Enter the array element at "<< i <<" :";
//		cin >> arr[i];
//		if (arr[i] == -1)
//		{
//			cout << "Enter correct array element at " << i << " :";
//			cin >> arr[i];
//		}
//	}
//	int j = 0;
//	cout << "Enter the index position you want to find and enter -1 to exit program:";
//	cin >> j;
//	findindex(arr, s, j);
//	lastindex(arr, s, j);
//	return 0;
//}