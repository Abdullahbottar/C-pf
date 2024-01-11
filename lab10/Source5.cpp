//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	cout << "enter the string:";
//	getline(cin, str);
//	cout << "enter the sub string:";
//	string sub;
//	getline(cin, sub);
//	int size = 0;
//	int size1 = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (str[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			size++;
//		}
//	}
//	for (int i = 0; i < 50; i++)
//	{
//		if (sub[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			size1++;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		int temp = i;
//		for (int j = 0; j < size1; j++)
//		{
//			if (str[i] == sub[j])
//			{
//				i++;
//			}
//		}
//		int chk = i - temp;
//		if (chk == size1)
//		{
//			cout << "sub is found at " << temp << " index." << endl;
//			break;
//		}
//	}
//
//
//
//	cout << endl;
//	system("pause");
//	return 0;
//}