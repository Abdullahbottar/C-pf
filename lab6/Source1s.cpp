//#include <iostream>
//using namespace std;
//void desenarr(int arr1[], int arr2[], int size1, int size2)
//{
//	int index = size1 + size2;
//	int i = 0;
//	int merge[20];
//	for (i = 0; i < size1; i++)
//	{
//		merge[i] = arr1[i];
//	}
//	for (int j = 0; j < size2; j++)
//	{
//		merge[i] = arr2[j];
//		++i;
//	}
//	for (int j = 0; j < (index - 1); j++)
//	{
//		for (int i = 0; i < (index - 1); i++)
//		{
//			if (merge[i] < merge[i + 1])
//			{
//				int temp = merge[i];
//				merge[i] = merge[i + 1];
//				merge[i + 1] = temp;
//			}
//		}
//	}
//	cout << "The new array in desending order is :" << endl;
//	for (int k = 0; k < (index - 1); k++)
//	{
//		cout << merge[k];
//	}
//	cout << endl;
//}
//int main()
//{
//	int arr1[100], arr2[100];
//	int size1, size2;
//	cout << "Enter the size of array1 you want : ";
//	cin >> size1;
//	cout << "Enter the size of array2 you want :";
//	cin >> size2;
//	for (int i = 0; i < size1; i++)
//	{
//		cout << "Enter the component of array 1:";
//		cin >> arr1[i];
//	}
//	cout << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		cout << "Enter the component of array 2:";
//		cin >> arr2[i];
//	}
//	cout << endl;
//	for (int i = 0; i < size1; i++)
//	{
//		cout << arr1[i];
//	}
//	cout << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		cout << arr2[i];
//	}
//	cout << endl;
//	desenarr(arr1, arr2, size1, size2);
//	cout << endl;
//	return 0;
//}