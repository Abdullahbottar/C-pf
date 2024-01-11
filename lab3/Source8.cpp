//#include <iostream>
//using namespace std;
//int main()
//{
//	float p, i, y;
//	cout << "enter your pay:";
//	cin >> p;
//	if (p < 0)
//	{
//		while (p < 0)
//		{
//			cout << "enter your correct pay:";
//			cin >> p;
//		}
//	}
//	cout << "Enter the increment per year:";
//	cin >> i;
//	if (i < 0 || i>100)
//	{
//		while (i < 0 || i>100)
//		{
//			cout << "Enter your correct the increment per year:";
//			cin >> i;
//		}
//	}
//	cout << "Enter the years:";
//	cin >> y;
//	if (y < 0)
//	{
//		while (y < 0)
//		{
//			cout << "Enter correct years:";
//			cin >> y;
//		}
//	}
//	for (int i = 1; i <= y; i++)
//	{
//		p = ((p * i) / 100) + p;
//		cout << "Your pay in " << i << " years is: " << p << endl;
//	}
//
//	system("pause");
//	return 0;
//}