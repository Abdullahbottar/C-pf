//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "enter the array";
//	cin.getline(arr, 100);
//	int n = strlen(arr);
//	string str;
//	int count = 0;
//	float sum = 0;
//	float index = 0;
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		while (arr[i] != '$')
//		{
//			str = " ";
//			while (arr[i] != '#')
//			{
//				str += arr[i];
//				i++;
//			}
//			cout << str << " ";
//			i++;
//			sum = 0;
//			sum += arr[i] - 48;
//			i += 2;
//			sum += arr[i] - 48;
//			i += 2;
//			sum += arr[i] - 48;
//			i++;
//			float result = sum / 3;
//			cout << result << endl;
//		}
//	}
//
//	return 0;
//}
