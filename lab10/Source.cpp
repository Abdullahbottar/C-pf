//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	cout << "enter the array:";
//	getline(cin, str);
//	string sub;
//	cout << "enter the sub string:";
//	getline(cin, sub);
//	int size1 = 0;
//	for (int i = 0; i < 100; i++)
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
//	int size2 = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (sub[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			size2++;
//		}
//	}
//	char arr[30][50];
//	char arr1[15][50];
//	int strat = 0;
//	int temp = 0;
//	int index1 = 0;
//	int sec = 0;
//	for (int i = 0; i < size1; i++)
//	{
//		if (str[i] == ' '|| str[i] == '.')
//		{
//			strat = i;
//			--strat;
//			if (str[strat] != '.')
//			{
//				sec = 0;
//				strat = i;
//				for (int j = temp; j < strat; j++)
//				{
//					arr[index1][sec] = str[j];
//					sec++;
//				}
//				arr[index1][sec] = '\0';
//				index1++;
//				strat++;
//				temp = strat;
//			}
//			else if (str[strat] == '.')
//			{
//				temp = i;
//				temp++;
//			}
//		}
//
//	}
//	temp = 0;
//	int index2 = 0;
//	for (int i = 0; i <= size2; i++)
//	{
//		if (sub[i] == '*' || sub[i] == '\0')
//		{
//			sec = 0;
//			strat = i;
//			for (int j = temp; j < strat; j++)
//			{
//				arr1[index2][sec] = sub[j];
//				sec++;
//			}
//			arr1[index2][sec] = '\0';
//			index2++;
//			strat++;
//			temp = strat;
//		}
//	}
//	int z = 0;
//	for (int i = 0; i < index1; i++)
//	{
//		string comp = arr[i];
//		string comp1 = arr1[z];
//		if (comp == comp1)
//		{
//			z++;
//		}
//		if (z == index2)
//		{
//			cout << "patteren found" << endl;
//			break;
//		}
//		else if (i == index1 - 1)
//		{
//			if (z < index2)
//			{
//				cout << "patteren not found" << endl;
//			}
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}