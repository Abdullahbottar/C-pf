//#include <iostream>
//using namespace std;
//void reverse(int n, int &rn)
//{
//	int p;
//	while (n > 0)
//	{
//		p = n % 10;
//		n = n - p;
//		n /= 10;
//		rn= (rn * 10) + p;
//	}
//}
//void print(int &n, int rn)
//{
//	int m = 10;
//	while (m < n)
//	{
//		m *= 10;
//	}
//	n = n * m;
//	n = n + rn;
//	cout << n << endl;
//}
//int main()
//{
//	int number;
//	int revnumber = 0;
//	cout << "Enter the number:";
//	cin >> number;
//	if (number < 0)
//	{
//		while (number < 0)
//		{
//			cout << "Enter the correct number:";
//			cin >> number;
//		}
//	}
//	reverse(number, revnumber);
//	print(number, revnumber);
//	cout << endl;
//	return 0;
//
//}
