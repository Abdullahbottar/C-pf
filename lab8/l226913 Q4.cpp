//#include <iostream>
//using namespace std;
//void replace(int arr[],int s, int r, int n)
//{
//	cout << "Array before replacing:" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	arr[r] = n;
//	cout << "Array after replacing:" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
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
//		   cout << "Enter the correct size of s:";
//		   cin >> s;
//		}
//	}
//	cout << "Enter the array elements:" << endl;
//	for (int i = 0; i < s; i++)
//	{
//	   cout << "Enter the array element at " << i << " :";
//	   cin >> arr[i];
//	}
//	int r = 0;
//	cout << "Enter the position of number you want to replace:";
//	cin >> r;
//	if (r < 0 || r >= s)
//	{
//		while (r < 0 || r >= s)
//		{
//			cout << "Enter the correct position:";
//			cin >> r;
//		}
//	}
//	int n = 0;
//	cout << "Enter the number you wnat to replace:";
//	cin >> n;
//	replace(arr, s, r, n);
//	return 0;
//}