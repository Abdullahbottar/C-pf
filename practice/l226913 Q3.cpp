//#include <iostream>
//using namespace std;
//void token(char arr[100], char a, char arr1[][100])
//{
//	int c = 0;
//	int index = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == a|| arr[i]=='\0')
//		{
//			int j = 0;
//			for (c; c < i; c++)
//			{
//				arr1[index][j] = arr[c];
//				j++;
//			}
//			arr1[index][j] = { '\0'};
//			index++;
//			c++;
//		}
//	}
//	cout << "Token are:" << endl;
//	for (int i = 0; i < index; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	char a;
//	cout << "Enter the denominator:";
//	cin >> a;
//	char newarr[100][100];
//	token(arr, a, newarr);
//	cout << endl;
//	return 0;
//}