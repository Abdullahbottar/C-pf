#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the value of n:";
	cin >> n;
	if (n < 0)
	{
		n = n * (-1);
	}
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	cout << "the factorial of " << n << " is:" << sum << endl;




	system("pause");
	return 0;
}