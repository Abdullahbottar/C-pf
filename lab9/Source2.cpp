//#include <iostream>
//using namespace std;
//int palin(char arr[], int n, int count)
//{
//	bool flag = 0;
//	int k = 0;
//	for (int i = n; i >= count; i--)
//	{
//		if (arr[k] == arr[i])
//		{
//			flag = 1;
//		}
//		else
//		{
//			flag = 0;
//			break;
//		}
//		k++;
//	}
//	return flag;
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int n = strlen(arr);
//	int count = n;
//	if (n % 2 != 0)
//	{
//		count = (n / 2) + 1;
//	}
//	else
//	{
//		count = n / 2;
//	}
//	--n;
//	int c = palin(arr, n, count);
//	if (c == 1)
//	{
//		cout << "The array is palindrome." << endl;
//	}
//	else
//	{
//		cout << "The array is not palindrome." << endl;
//	}
//	return 0;
//}