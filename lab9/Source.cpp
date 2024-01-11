//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int len = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] != '\0')
//		{
//			len++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	int count = 0;
//	if (len % 2 != 0)
//	{
//		count = (len / 2) + 1;
//	}
//	else
//	{
//		count = len / 2;
//	}
//	len--;
//	int temp = 0;
//	for (int i = 0; i < count; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[len];
//		arr[len] = temp;
//		len--;
//	}
//	cout << arr << endl;
//	cout << endl;
//	return 0;
//}