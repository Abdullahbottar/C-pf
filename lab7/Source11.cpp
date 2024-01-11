//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	cout << endl;
//	int size = strlen(arr);
//	int arr1[100];
//	int k = 0;
//	int count = 0;
//	int min = INT_MAX;
//	int max = INT_MIN;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == ' '|| arr[i]=='.')
//		{
//			arr1[k] = count;
//			if (count < min)
//			{
//				min = count;
//			}
//			if (count > max)
//			{
//				max = count;
//			}
//			count = 0;
//			++k;
//		}
//		else
//		{
//			++count;
//		}
//	}
//	cout << "The highest word size is : " << max << endl;
//	cout << "The smallest word size is: " << min << endl;
//	/*for (int i = 0; i <= k-1; i++)
//	{
//		int temp = 0;
//		for (int j = 0; j < k-1; j++)
//		{
//			if (arr1[i] > arr1[i + 1])
//			{
//				temp = arr1[i];
//				arr1[i] = arr1[i + 1];
//				arr1[i + 1] = temp;
//			}
//		}
//	}
//	cout << "The smallest word size is: " << arr1[0] << endl;*/
//
//	return 0;
//}