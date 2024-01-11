//#include <iostream>
//using namespace std;
//void counter(char arr[], int n)
//{
//	int spaces = 0;
//	int uppcase = 0;
//	int lowcase = 0;
//	int letter = 0;
//	int val = 0;
//	for (int i = 0; i < n; i++)
//	{
//		char c = arr[i];
//		val = int(c);
//		if (val == 32)
//		{
//			spaces++;
//		}
//		else if (val >= 65 && val <= 90)
//		{
//			uppcase++;
//			letter++;
//		}
//		else if (val >= 96 && val <= 122)
//		{
//			lowcase++;
//			letter++;
//		}
//		else
//		{
//			letter++;
//		}
//	}
//	cout << "Number of letters in array is: " << letter << "." << endl;
//	cout << "Number of spaces in array is: " << spaces << "." << endl;
//	cout << "Number of uppercase letters in array is: " << uppcase << "." << endl;
//	cout << "Number of lowercase letters in array is: " << lowcase << "." << endl;
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int n = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] != '\0')
//		{
//			n++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	counter(arr, n);
//	return 0;
//}