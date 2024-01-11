//#include <iostream>
//using namespace std;
//void encript(char arr[], int v)
//{
//	int temp = 0;
//	char c;
//	for (int i = 0; i < v; i++)
//	{
//		c = arr[i];
//		temp = int(c + i);
//		c = char(temp);
//		arr[i] = c;
//	}
//	cout << "The Encrypted sequence:" << endl;
//	cout << arr << endl;
//}
//void descript(char arr[], int n)
//{
//	int temp = 0;
//	char c;
//	for (int i = 0; i < n; i++)
//	{
//		c = arr[i];
//		temp = int(c - i);
//		c = char(temp);
//		arr[i] = c;
//	}
//	cout << "The decrypted Sequence:" << endl;
//	cout << arr << endl;
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int n = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			n++;
//		}
//	}
//	encript(arr, n);
//	descript(arr, n);
//	return 0;
//}