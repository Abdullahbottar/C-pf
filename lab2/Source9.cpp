#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the value of n:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		for (int j = 2; j <= n; j++)
		{
			cout << i * j << "\t";
		}
		cout << "\n";
	}


	system("pause");
	return 0;
}