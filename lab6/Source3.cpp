//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100];
//	int size;
//	cout << "Enter the size of array:";
//	cin >> size;
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the component of array :";
//		cin >> arr[i];
//	}
//	cout << "The array you have entered is :" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//	int newarr[100];
//	for (int i = 0; i < size; i++)
//	{
//		newarr[i] = arr[i];
//	}
//	for (int j = 0; j < size-1; j++)
//	{
//		for (int i = 0; i < size-1; i++)
//		{
//			if (newarr[i] > newarr[i + 1])
//			{
//				int temp = newarr[i];
//				newarr[i] = newarr[i + 1];
//				newarr[i + 1] = temp;
//			}
//		}
//	}
//	cout << "The sorted array will be:" << endl;
//	for (int k = 0; k < size; k++)
//	{
//		cout << newarr[k] << "\t";
//	}
//	cout << endl;
//	return 0;
//}
