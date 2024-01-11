#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the number of lines you want:";
	cin >> n;
	int total = 0;
	int spaces = 0;
	int count = 1;
	total = (n * 2) - 1;
	while (n>0)
	{
		while (count <=(total-spaces))
		{
			if (count <= spaces)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			
			}
			count++;
		}
		count = 1;
		cout << endl;
		spaces++;
		n--;
	}



	system("pause");
	return 0;
}