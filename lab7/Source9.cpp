//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "Enter the food of monkey " << i << " at day " << j << " :";
//			cin >> arr[i][j];
//			if (arr[i][j] < 0)
//			{
//				while (arr[i][j] < 0)
//				{
//					cout << "Enter the correct number of pounds:";
//					cin >> arr[i][j];
//				}
//			}
//		}
//	}
//	cout << "The matrix of 3*5 is" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	float sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//		  sum= sum +arr[i][j];
//		}
//	}
//	sum /= 5;
//	cout << "The family of monkeys average food per day is: " << sum << endl;
//	int arr1[100];
//	int k = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr1[k]=arr[i][j];
//			++k;
//		}
//	}
//	--k;
//	for (int i = 0; i < k; i++)
//	{
//		int temp = 0;
//		for (int j = 0; j < k-1; j++)
//		{
//			if (arr1[i] < arr1[i + 1])
//			{
//				temp = arr1[i];
//				arr1[i] = arr1[i + 1];
//				arr1[i + 1] = temp;
//S
//			}
//		}
//	}
//	cout << "The least amount of food eaten by monkey in 5 days is:" << arr1[k];
//	cout << endl;
//	for (int i = 0; i < k; i++)
//	{
//		int temp = 0;
//		for (int j = 0; j < k - 1; j++)
//		{
//			if (arr1[i] > arr1[i + 1])
//			{
//				temp = arr1[i];
//				arr1[i] = arr1[i + 1];
//				arr1[i + 1] = temp;
//
//			}
//		}
//	}
//	cout << "The most amount of food eaten by monkey in 5 days is:" << arr1[k] << endl;
//	return 0;
//
//}