//#include <iostream>
//using namespace std;
//void mergearr(int arr[], int arr2[], int size1, int size2)
//{
//	int index = size1 + size2;
//	int mergearr[100];
//	int i = 0;
//	for ( i = 0; i < size1; i++)
//	{
//		mergearr[i] = arr[i];
//	}
//	for (int j = 0; j < size2; j++)
//	{
//		mergearr[i] = arr2[j];
//		++i;
//	}
//	int c = i;
//	for (int j = 0; j < (index - 1); j++)
//	{
//		for (int i = 0; i < index - 1; i++)
//		{
//			if (mergearr[i] > mergearr[i + 1])
//			{
//				int temp = mergearr[i];
//				mergearr[i] = mergearr[i + 1];
//				mergearr[i + 1] = temp;
//			}
//		}
//	}
//	cout << "The new merged array in acesnding order is: " << endl;
//	for (int k = 0; k < index; k++)
//	{
//		cout << mergearr[k];
//	}
//}
//int main()
//{
//	int arr1[100], arr2[100];
//	int size1, size2;
//	cout << "Enter the size of array 1 you want:";
//	cin >> size1;
//	cout << "Enter the size of array 2 you want:";
//	cin >> size2;
//	for (int i = 0; i < size1; i++)
//	{
//		cout << "Enter the value in array 1:";
//		cin >> arr1[i];
//	}
//	for (int i = 0; i < size2; i++)
//	{
//		cout << "Enter the value in array 2:";
//		cin >> arr2[i];
//	}
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
//	mergearr(arr1, arr2, size1, size2);
//	cout << endl;
//	return 0;
//}