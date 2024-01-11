//#include <iostream>
//using namespace std;
//void wordreverse(char arr[], int s)
//{
//	char arr1[100];
//	int count = 0;
//	int j = 0;
//	for (int i = 0; i <= s; i++)
//	{
//		if (arr[i] == ' ' || arr[i] == '\0')
//		{
//			int c = i;
//			--c;
//			for (j; j <= i - 1; j++)
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
//	for (int i = 0; i <= j; i++)
//	{
//		arr[i] = arr1[i];
//	}
//	cout << arr << endl;
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int s = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] != '\0')
//		{
//			s++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	wordreverse(arr, s);
//	return 0;
//}