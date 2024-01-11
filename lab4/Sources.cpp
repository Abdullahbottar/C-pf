#include <iostream>
using namespace std;
int main()
{
	int max, second_max, num;
	for (int i = 1; i <= 25; i++)
	{
		cout << "enter a numner:";
		cin >> num;
	}
	int temp = INT_MIN;
	if (num > INT_MIN)
	{
		temp = max;
		max = second_max;
		second_max = num;
    }
	cout << "second max is:" << second_max << endl;



	system("pause");
	return 0;
}