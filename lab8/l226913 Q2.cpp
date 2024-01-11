//#include <iostream>
//using namespace std;
//void cinarr(int arr[], int& n)
//{
//	cout << "Enter the limit of array:";
//	cin >> n;
//	if (n < 0 || n>20)
//	{
//		while (n < 0 || n>20)
//		{
//			cout << "Enter the correct limit of elemnts:";
//			cin >> n;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Enter the array element " << i << " :";
//		cin >> arr[i];
//	}
//	cout << endl;
//}
//void coutarr( int arr[], int n)
//{
//	cout << "Array is:";
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void keyfreq( int arr[], int key, int n)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == key)
//		{
//			count++;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	cout << "The frequency of key " << key << " is: " << count << endl;
//}
//int main()
//{
//	int n;
//	int arr[20];
//	cinarr(arr, n);
//	coutarr(arr, n);
//	int key;
//	cout << "Enter key:";
//	cin >> key;
//	keyfreq(arr, key, n);
//
//
//	return 0;
//}