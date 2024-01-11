#include <iostream>
using namespace std;
int main()
{
	float bill, amountp;
	int change;
	cout << "Enter the amount of bill:";
	cin >> bill;
	cout << endl;
	cout << "Enter the amount paid by customer:";
	cin >> amountp;
	cout << endl;
	if (amountp - bill < 0)
	{
		cout << "You gave less amount than required bill pay full amount:";
		cin >> amountp;
	}
	change = amountp - bill;
	cout << "total change to be given is:" << change << endl;
	int a, s, d, f, g, h, j, k, l, z;
	a = change / 5000;
	s = (change % 5000) / 1000;
	d = ((change % 5000) % 1000) / 500;
	f = (((change % 5000) % 1000) % 500) / 100;
	g = ((((change % 5000) % 1000) % 500) % 100) / 50;
	h = (((((change % 5000) % 1000) % 500) % 100) % 50) / 20;
	j = ((((((change % 5000) % 1000) % 500) % 100) % 50) % 20) / 10;
	k = (((((((change % 5000) % 1000) % 500) % 100) % 50) % 20) % 10) / 5;
	l = ((((((((change % 5000) % 1000) % 500) % 100) % 50) % 20) % 10) % 5) / 2;
	z = (((((((((change % 5000) % 1000) % 500) % 100) % 50) % 20) % 10) % 5) % 2) / 1;
	cout << "The change will be given in these notes & coins :" << endl;
	cout << "5000 \t \t \t :" << a << endl;
	cout << "1000 \t \t \t :" << s << endl;
	cout << "500  \t \t \t :" << d << endl;
	cout << "100  \t \t \t :" << f << endl;
	cout << "50   \t \t \t :" << g << endl;
	cout << "20   \t \t \t :" << h << endl;
	cout << "10   \t \t \t :" << j << endl;
	cout << "5    \t \t \t :" << k << endl;
	cout << "2    \t \t \t :" << l << endl;
	cout << "1    \t \t \t :" << z << endl;
	system("pause");
	return 0;
}