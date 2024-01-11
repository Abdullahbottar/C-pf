//#include <iostream>
//using namespace std;
//void evenodd(int arr1[], int arr2[], int arr3[], int s1, int s2, int& s3)
//{
//	int k = 0;
//	for (int i = 0; i < s1; i++)
//	{
//		if (arr1[i] % 2 == 0)
//		{
//			arr3[k] = arr1[i];
//			k++;
//		}
//	}
//	for (int i = 0; i < s2; i++)
//	{
//		if (arr2[i] % 2 == 0)
//		{
//			arr3[k] = arr2[i];
//			k++;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int temp = 0;
//		for (i = 0; i < k - 1; i++)
//		{
//			if (arr3[i] > arr3[i + 1])
//			{
//				temp = arr3[i];
//				arr3[i] = arr3[i + 1];
//				arr3[i + 1] = temp;
//			}
//		}
//	}
//	for (int j = 0; j < s1; j++)
//	{
//		if (arr1[j] % 2 != 0)
//		{
//			arr3[k] = arr1[j];
//			k++;
//		}
//	}
//	for (int j = 0; j < s2; j++)
//	{
//		if (arr2[j] % 2 != 0)
//		{
//			arr3[k] = arr2[j];
//			k++;
//		}
//	}
//	for (int j = i; j < k; j++)
//	{
//	    int temp = 0;
//		for (j = i; j < k-1; j++)
//		{
//			if (arr3[j] < arr3[j + 1])
//			{
//				temp = arr3[j];
//				arr3[j] = arr3[j + 1];
//				arr3[j + 1] = temp;
//			}
//		}
//	}
//	arr3[k] = { '\0' };
//	s3 = k;
//}
//int main()
//{
//	int arr1[100];
//	int size1;
//	int arr2[100];
//	int size2;
//	int arr3[100];
//	int size3;
//	cout << "Enter the size of array 1:";
//	cin >> size1;
//	cout << "Enter the size of array 2:";
//	cin >> size2;
//	for (int i = 0; i < size1; i++)
//	{
//		cout << "Enter the array1 element " << i << " :";
//		cin >> arr1[i];
//	}
//	cout << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		cout << "Enter the array2 element " << i << " :";
//		cin >> arr2[i];
//	}
//	cout << endl;
//	cout << "Array 1 is:" << endl;
//	for (int i = 0; i < size1; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
//	cout << "Array 2 is:" << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//	cout << "The merged sorted array is:" << endl;
//	evenodd(arr1, arr2, arr3, size1, size2, size3);
//	for (int i = 0; i < size3; i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
