//#include <iostream>
//#include <string>
//using namespace std;
//void reverse(string str, string str1)
//{
//	int len1 = 0;
//	int len2 = 0;
//	string lo;
//	for (int i = 0; i < 100; i++)
//	{
//		if (str[i] != '\0')
//		{
//			len1++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		if (str1[i] != '\0')
//		{
//			len2++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	int max = 0;
//	if (len1 > len2)
//	{
//		lo = str;
//		cout << "LARGER STRING IS STRING 1" << endl;
//		cout << lo << endl;
//		max = len1;
//	}
//	if (len1 < len2)
//	{
//		lo = str1;
//		cout << "LARGER STRING IS STRING 2" << endl;
//		cout << lo << endl;
//		max = len2;
//	}
//	if (len1 == len2)
//	{
//		cout << "STRINGS EQUAL IN SIZE PROGRAM TERMINATED." << endl;
//	}
//	int count = 0;
//	if (max % 2 == 0)
//	{
//		count = max / 2;
//	}
//	if (max % 2 != 0)
//	{
//		count = (max + 1) / 2;
//	}
//	int k = 0;
//	for (int i = max - 1; i >= count; i--)
//	{
//		char pre = lo[k];
//		lo[k] = lo[i];
//		lo[i] = pre;
//		k++;
//	}
//	if (len1 != len2)
//	{
//		cout << "THE REVERSE STRING IS :" << lo << endl;
//	}
//}
//int main()
//{
//	string str;
//	string str1;
//	cout << "ENTER THE FIRST STRING:";
//	getline(cin, str);
//	cout << "ENTER THE SECOND STRING:";
//	getline(cin, str1);
//	cout << endl;
//	cout << "YOU HAVE ENTERED." << endl;
//	cout << str << endl;
//	cout << str1 << endl;
//	reverse(str, str1);
//	cout << endl;
//	return 0;
//}