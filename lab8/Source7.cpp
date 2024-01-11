//#include <iostream>
//using namespace std;
//void lenght(char str1[], char str2[])
//{
//	int len = 0;
//	for (int i = 0; str1[i]!= '\0'; i++)
//	{
//		len++;
//		/*if (str1[i] != '\0')
//		{
//			len++;
//		}
//		else
//		{
//			break;
//		}*/
//	}
//	cout << len << endl;
//	int i = 0;
//	for ( i = 0; i < len; i++)
//	{
//		str2[i] = str1[i];
//	}
//	str2[len] = { '\0' };
//	cout << str2 << endl;
//	int k = 0;
//	for (i = len - 1; i >= 0; i--)
//	{
//		str2[k] = str1[i];
//		k++;
//	}
//	str2[k] = { '\0' };
//	cout << str2 << endl;
//	int i = len - 1;
//	int j = 0;
//	for ( j = 0; j < len-3; j++)
//	{
//		str2[j] = str2[i];
//		i--;
//	}
//	str2[j] = { '\0' };
//	cout << str2 << endl;
//}
//int main()
//{
//	char str1[100];
//	char str2[100];
//	cout << "Enter the array:";
//	cin.getline(str1, 100);
//	lenght(str1, str2);
//	cout << endl;
//	return 0;
//}