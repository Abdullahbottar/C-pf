//#include <iostream>
//#include <cstring>
//using namespace std;
//int vowel(char arr[], int s)
//{
//	int count = 0;
//	for (int i = 0; i < s; i++)
//	{
//		if (arr[i] == 'a' || arr[i] == 'u' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'e' || arr[i] == 'A' || arr[i] == 'U' || arr[i] == 'O' || arr[i] == 'I' || arr[i] == 'E')
//		{
//			++count;
//		}
//	}
//	return count;
//}
//int constant(char arr[], int s)
//{
//	int count = 0;
//	for (int i = 0; i < s; i++)
//	{
//		if (arr[i] == 'a' || arr[i] == 'u' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'e' || arr[i] == 'A' || arr[i] == 'U' || arr[i] == 'O' || arr[i] == 'I' || arr[i] == 'E')
//		{
//			continue;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int r = strlen(arr);
//	char arr1[100];
//	cout << "Enter the new string:";
//	cin.getline(arr1, 100);
//	cout << endl;
//	cout << "Press a to count the number of vowels in array:" << endl;
//	cout << "Press b to count the number of constants in array:" << endl;
//	cout << "Press c to count the number of vowels and constants in array:" << endl;
//	cout << "Press d to count the number of vowels and constants in new array:" << endl;
//	cout << "Press e to exit program:" << endl;
//	char c;
//	cout << "Enter your input:";
//	cin >> c;
//	cin.ignore();
//	int si = 0;
//	int s = 0;
//	int v = 0;
//	while (c != 'e')
//	{
//		if (c == 'd')
//		{
//			si = strlen(arr1);
//			s = constant(arr1, si);
//			v = vowel(arr1, si);
//			cout << "The number of constant in string is:" << s << endl;
//			cout << "The number of vowel in string is:" << v << endl;
//			cout << "The number of vowel and constant in string is:" << s + v << endl;
//		}
//		else
//		{
//			switch (c)
//			{
//			case  'a':
//				s = vowel(arr, r);
//				cout << "The number of vowel in string is:" << s << endl;
//				break;
//			case  'b':
//				v = constant(arr, r);
//				cout << "The number of constant in string is:" << v << endl;
//				break;
//			case  'c':
//				cout << "The number of vowel and constant in string is:" << s + v << endl;
//
//				break;
//			default:
//				cout << "Wrong input." << endl;
//				break;
//			}
//		}
//		cout << "Enter your input:";
//		cin >> c;
//		if (c == 'e')
//		{
//			cout << "Program exited." << endl;
//		}
//	}
//
//	return 0;
//}
