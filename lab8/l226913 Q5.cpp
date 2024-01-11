//#include <iostream>
//using namespace std;
//int main()
//{
//	float arr[9];
//	int s;
//	cout << "Enter the size of array:";
//	cin >> s;
//	if (s < 0|| s >=9)
//	{
//		while (s < 0|| s>=9)
//		{
//			cout << "Enter the correct size of s:";
//			cin >> s;
//		}
//	}
//	cout << "Enter the array elements:" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << "Enter the array element at " << i << " :";
//		cin >> arr[i];
//	}
//	cout << endl;
//	cout << "Array is:" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	int f;
//	for (int i = 0; i < s-1; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			f = 0;
//			break;
//		}
//		else
//		{
//			f = 1;
//		}
//	}
//	cout << endl;
//	if (f == 1)
//	{
//		int n = 0;
//		cout << "Enter the number you want to delete:";
//		cin >> n;
//		int count = 0;
//		for (int i = 0; i < s; i++)
//		{
//			if (arr[i] == n)
//			{
//				count++;
//			}
//			else
//			{
//				continue;
//			}
//		}
//		if (count == 0)
//		{
//			cout << "Number not found in array." << endl;
//		}
//		else
//		{
//			float arr1[9];
//			int k = 0;
//			for (int i = 0; i < s; i++)
//			{
//				if (arr[i] != n)
//				{
//					arr1[k] = arr[i];
//					k++;
//				}
//				else
//				{
//					continue;
//				}
//			}
//			cout << "The array after delting the number:" << endl;
//			for (int i = 0; i < s-count; i++)
//			{
//				cout << arr1[i] << " ";
//			}
//		}
//	}
//	else
//	{
//		cout << "Array not sorted program terminated." << endl;
//	}
//
//	return 0;
//
//}