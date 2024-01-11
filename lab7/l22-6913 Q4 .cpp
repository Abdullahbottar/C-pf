//#include <iostream>
//using namespace std;
//void printTable(int a, int b, int& sum)
//{
//	cout << "********TABLE*********" << endl;
//	for (int i = 1; i < 2; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			cout << a << " * " << j << " = " << a * j << endl;
//			sum = a * j;
//		}
//	}
//}
//int main()
//{
//	int t;
//	int l;
//	int sum = 0;
//	cout << "ENTER THE NUBER WHOSE TABLE YOU WANT:";
//	cin >> t;
//	cout << "ENTER THE LIMIT OF THE TABLE:";
//	cin >> l;
//	if (t < 0)
//	{
//		while (t < 0)
//		{
//			cout << "Enter the correct number of table input:";
//			cin >> t;
//		}
//	}
//	if (l < 0)
//	{
//		while (l < 0)
//		{
//			cout << "Enter the correct number of table limit:";
//			cin >> l;
//		}
//	}
//	printTable(t, l, sum);
//	cout << "The last value is: " << sum << endl;
//
//	return 0;
//}
