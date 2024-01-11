//#include <iostream>
//using namespace std;
//double power(double x, int y)
//{
//	double ans = 1;
//	for (int i = 1; i <= y; i++)
//	{
//		ans = ans * x;
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	double p;
//	cout << "enter the value of a number:";
//	cin >> n;
//	cout << "enter the value of power number:";
//	cin >> p;
//	if (n < 0)
//	{
//		while (n < 0)
//		{
//			cout << "\n";
//			cout << "enter the value of a number:";
//			cin >> n;
//		}
//	}
//	if (p < 0)
//	{
//		while (p < 0)
//		{
//			cout << "\n";
//			cout << "enter the value of power number:";
//			cin >> p;
//		}
//	}
//	int r = 0;
//	r = power(n,p);
//	cout << "Result is: " << r << endl;
//	r = power(n,2);
//	cout << "Result is: " << r << endl;
//	system("pause");
//	return 0;
//}