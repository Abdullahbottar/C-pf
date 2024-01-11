//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int s = strlen(arr);
//	char arr1[100];
//	int count = 0;
//	int j = 0;
//	for (int i = 0; i <= s; i++)
//	{
//		if (arr[i] == ' ' || arr[i]=='\0')
//		{
//			int c = i;
//			--c;
//			for (j; j <= i-1; j++)
//			{
//				if (c < count)
//				{
//					break;
//				}
//				else
//				{
//					arr1[j] = arr[c];
//					--c;
//				}
//			}
//			arr1[j] = ' ';
//			j++;
//			count = i;
//			++i;
//			i--;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	arr1[j] = { '\0' };
//	cout << arr1 << endl;
//
//	return 0;
//}
