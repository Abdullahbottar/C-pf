//#include <iostream>
//using namespace std;
//int add(int x, int y)
//{
//	int sum = x + y;
//	return sum;
//}
//int multi(int x, int y)
//{
//	int sum = x * y;
//	return sum;
//}
//int subt(int x, int y)
//{
//	int sum = x - y;
//	return sum;
//}
//float divi(int x, int y)
//{
//	float sum = x / y;
//	return sum;
//}
//void tab(int x, int y)
//{
//	int t;
//	cout << "how much power of table you want:";
//	cin >> t;
//	if (t < 0)
//	{
//		while (t < 0)
//		{
//			cout << "enter the correct value:";
//			cin >> t;
//		}
//	}
//	cout << "the table of " << x << " upto " << t << " is:" << endl;
//	for (int i = 0; i <= t; i++)
//	{
//		int sum = x * i;
//		cout << sum << endl;
//	}
//	cout << endl;
//	cout << "the table of " << y << " upto " << t << " is:" << endl;
//	for (int j = 0; j <= t; j++)
//	{
//		int sum = y * j;
//		cout << sum << endl;
//	}
//
//}
//int main()
//{
//	int a, b;
//	cout << "enter first integer:";
//	cin >> a;
//	cout << "enter second integer:";
//	cin >> b;
//	int sum;
//	cout << "addition of these two is:" << endl;
//	sum = add(a, b);
//	cout << sum << endl;
//	cout << "subtraction of these two is:" << endl;
//	sum = subt(a, b);
//	cout << sum << endl;
//	cout << "multiplication of these two is:" << endl;
//	sum = multi(a, b);
//	cout << sum << endl;
//	cout << "divison of these two is:" << endl;
//	float sum1;
//	sum1 = divi(a, b);
//	cout << sum1 << endl;
//	cout << "table of these two is:" << endl;
//	tab(a, b);
//	cout << endl;
//	return 0;
//}