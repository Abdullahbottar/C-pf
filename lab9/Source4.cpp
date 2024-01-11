//#include <iostream>
//using namespace std;
//int compare(char str1[], char str2[], int n, int v)
//{
//	bool flag = 0;
//	for (int i = 0; i < n; i++)
//	{
//	if (str1[i] == str2[i])
//		{
//			flag = 1;
//		}
//	else
//		{
//			flag = 0;
//			break;
//	    }
//	}
//	
//	return flag;
//}
//int main()
//{
//	char str1[100];
//	char str2[100];
//	cout << "Enter the first array:";
//	cin.getline(str1, 100);
//	cout << "Enter the second array:";
//	cin.getline(str2, 100);
//	int n = strlen(str1);
//	int v = strlen(str2);
//	if (n == v)
//	{
//		int c = compare(str1, str2, n, v);
//		if (c == 1)
//		{
//			cout << "The two arrays are same." << endl;
//		}
//		else
//		{
//			cout << "The two arrays are different." << endl;
//		}
//	}
//	else
//	{
//		cout << "The arrays lenght doesnt match." << endl;
//	}
//	return 0;
//}