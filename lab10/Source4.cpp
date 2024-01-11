//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "enter the array:";
//	cin.getline(arr, 100);
//	cout << "\n you entered:" << endl;
//	cout << arr << "." << endl;
//	int n = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			n++;
//		}
//	}
//	int size = n;
//	--n;
//	if (arr[n] == ' ')
//	{
//		while (arr[n] == ' ')
//		{
//			arr[n] = '\0';
//			--n;
//		}
//	}
//	cout << "trimmed" << endl;
//	cout << arr << "." << endl;
//	n++;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			i++;
//			while(arr[i] == ' ')
//			{
//				for (int j = i; j <= n; j++)
//				{
//					arr[j] = arr[j + 1];
//				}
//			}
//		}
//	}
//	cout << "extra space removed" << endl;
//	cout << arr << "." << endl;
//	n = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			n++;
//		}
//	}
//	int count = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			continue;
//		}
//		else
//		{
//			count = 1;
//			for (int j = (i+1); j < n; j++)
//			{
//				if (arr[i] == arr[j])
//				{
//					count++;
//					arr[j] = ' ';
//				}
//			}
//			cout << arr[i] << " appears " << count << " times" << endl;
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}