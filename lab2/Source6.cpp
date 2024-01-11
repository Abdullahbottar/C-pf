//#include <iostream>
//using namespace std;
//int main()
//{
//	int input;
//	cout << "enter your input:";
//	cin >> input;
//	if (input < 0)
//	{
//		while (input < 0)
//		{
//			cout << "enter your input:";
//			cin >> input;
//		}
//	}
//	int c = 0;
//	for (int i = 1; i <= input; i++)
//	{
//		for (int j = 2; j > i; j++)
//		{
//			if (j == 2 )
//			{
//				cout << j << endl;
//				c++;
//			}
//			if (j == 3)
//			{
//				cout << j << endl;
//				c++;
//			}
//			if (j == 5)
//			{
//				cout << j << endl;
//				c++;
//			}
//			if (j == 7)
//			{
//				cout << j << endl;
//				c++;
//			}
//
//			
//			if (j % 2 != 0 && j % 3 != 0 && j % 5 != 0 && j % 7 != 0 )
//			{
//				cout << j << endl;
//				c++;
//			}
//			if (c == input)
//			{
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}