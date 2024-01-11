//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr2[10];
//	int arr1[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter the components for array 1:";
//		cin >> arr1[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter the components for array 2:";
//		cin >> arr2[i];
//	}
//	int uniqe[10];
//	int k = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (arr1[j] == arr2[i])
//			{
//				uniqe[k] = arr1[j];
//				++k;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//
//	cout << "The array of unique numbers is:" << endl;
//	for (int i = 0; i < k; i++)
//	{
//		cout << uniqe[i] << "\t";
//	}
//
//	cout << endl;
//	return 0;
//}