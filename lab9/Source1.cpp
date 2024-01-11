//#include <iostream>
//using namespace std;
//void sorted(char arr[], int n)
//{
//	for (int i = 0; i <= n; i++)
//	{
//		int temp = 0;
//		for (int j = 0; j < n-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	cout << arr << endl;
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int n = strlen(arr);
//	int numb = 96;
//	int v = 0;
//	for (int i = 0; i < n; i++)
//	{
//		char c = arr[i];
//		v = int(c);
//		if (v > numb)
//		{
//			v -= 32;
//			c = char(v);
//			arr[i] = c;
//		}
//	}
//	sorted(arr, n);
//
//
//	cout << endl;
//	return 0;
//}