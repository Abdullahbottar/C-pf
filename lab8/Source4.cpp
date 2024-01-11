//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	int size = 0;
//	char arr1[100];
//	cout << "Enter the full name of a person:";
//	cin.getline(arr, 100);
//	size = strlen(arr);
//	int k = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (i == 0)
//		{
//			arr1[k] = arr[i];
//			k++;
//			arr1[k] = '.';
//			k++;
//		}
//		if (arr[i] == ' ')
//		{
//			int reset = i;
//			reset++;
//			while (arr[reset] != '.')
//			{
//				reset++;
//				if (arr[reset] == ' ')
//				{
//					arr1[k] = arr[i + 1];
//					k++;
//					arr1[k] = '.';
//					k++;
//					break;
//				}
//			}
//			if (arr[reset] == '.')
//			{
//				int ns = reset - i;
//				int s = i;
//				s++;
//				for (int j = 0; j < ns; j++)
//				{
//					arr1[k] = arr[s];
//					k++;
//					s++;
//				}
//			}
//		}
//	}
//	arr1[k] = { '\0' };
//	cout << arr1 << endl;
//	return 0;
//}