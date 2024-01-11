#include <iostream>
using namespace std;
int main()
{
	char arr[100];
	char arr1[100];
	cout << "Enter the array:";
	cin.getline(arr,100);
	int s = strlen(arr);
	char key;
	cout << "Enter the key:";
	cin >> key;
	int count = 0;
	for (int i = 0; i < s; i++)
	{
		if (arr[i] != key)
		{
			arr1[count] = arr[i];
			++count;
		}
		else
		{
			continue;
		}
	}
	arr1[count] = {'\0'};
	cout << arr1 << endl;
	cout << endl;


	return 0;
}