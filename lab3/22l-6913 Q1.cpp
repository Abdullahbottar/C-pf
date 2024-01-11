#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the value of numbers you want in fibonacci:";
	cin >> n;
	if (n < 0)
	{
		while (n < 0)
		{
			cout << "enter the correct value of numbers you want in fibonacci:";
			cin >> n;
		}
	}
	int pr = 1;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		i = sum;
		cout << sum << ",";
		sum = sum + pr;
		pr = i;
	}
	cout << "\n";



	system("pause");
	return 0;
}