//#include <iostream>
//#include <string>
//using namespace std;
//int gethugeint(string str, int arr[])
//{
//	int size1 = 0;
//    for (int i = 0; i < 100; i++)
//	{
//		if (str[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			size1++;
//		}
//	}
//	for (int i = 0; i < size1; i++)
//	{
//		int z = int(str[i])-48;
//		arr[i] = z;
//	}
//	return size1;
//}
//void mutli(int arr[], int arr1[], int s0, int s1)
//{
//	int mutli[40] = { 0 };
//	int v = 39;
//	int s12 = s1 - 1;
//	for (int i = 0; i < (s0 + s1); i++)
//	{
//		mutli[v] = (arr[i] * arr1[s12]);
//		v--;
//	}
//	v++;
//	cout << "MUTLIPLICATION IS :";
//	for (int i = v; i < 40; i++)
//	{
//		cout << mutli[i] << " ";
//	}
//}
//int main()
//{
//	string str;
//	string str1;
//	cout << "enter the first character array." << endl;
//	getline(cin, str);
//	cout << "enter the second character array." << endl;
//	getline(cin, str1);
//	int arr[20] = { 0 };
//	int arr1[20] = { 0 };
//	int hugeint1 = gethugeint(str, arr);
//	int hugeint2 = gethugeint(str1, arr1);
//	mutli(arr, arr1, hugeint1, hugeint2);
//	cout << endl;
//	system("pause");
//	return 0;
//}