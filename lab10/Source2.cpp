//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "enter the array:";
//	cin.getline(arr, 100);
//	int size = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			size++;
//		}
//	}
//	char arr1[20][30];
//	int sec = 0;
//	int start = 0;
//	int temp = 0;
//	int index1 = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == ' ' || arr[i] == '.')
//		{
//			start = i;
//			--start;
//			if (arr[start] != '.')
//			{
//				start = i;
//				sec = 0;
//				for (int j = temp; j < start; j++)
//				{
//					arr1[index1][sec] = arr[j];
//					sec++;
//				}
//				arr1[index1][sec] = '\0';
//				index1++;
//				start++;
//				temp = start;
//			}
//		}
//	}
//	for (int i = 0; i < index1; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//	int v = 0;
//	for (int i = 0; i < index1; i++)
//	{
//		string str = arr1[i];
//		int size1 = str.size();
//		v = v + size1 +1;
//		for (int j = v; j < size; j++)
//		{
//			int temp = j;
//			for (int k = 0; k < size1; k++)
//			{
//				if (arr[j] == str[k])
//				{
//					j++;
//				}
//			}
//			if (arr[j] == ' ' || arr[j]=='.')
//			{
//				int chk = j - temp;
//				if (chk == size1)
//				{
//					j = temp;
//					int l = 0;
//					for (l = j; l < (size - size1); l++)
//					{
//						arr[l] = arr[l + size1];
//					}
//					size = size - size1;
//					arr[l] = '\0';
//				}
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	cout << arr << endl;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			i++;
//			while (arr[i] == ' ')
//			{
//				for (int j = i; j <= size; j++)
//				{
//					arr[j] = arr[j + 1];
//				}
//			}
//		}
//	}
//	cout << arr << endl;
//	cout << endl;
//	system("pause");
//	return 0;
//}