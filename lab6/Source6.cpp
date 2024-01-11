//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	char arr[7];
//	cout << "Enter the array :";
//	cin.getline(arr, 7);
//	int n = 0;
//	cout << "Enter the value n:";
//	cin >> n;
//	if (n < 0 || n>6)
//	{
//		while (n < 0 || n>6)
//		{
//			cout << "Enter the correct value of n:";
//			cin >> n;
//		}
//	}
//	int index = strlen(arr);
//	int f = index;
//	char array[100];
//	cout << index << endl;
//	int i = 0;
//	int l = 0;
//	l = n;
//	for (int j = index -1 - (n); j >= 0; --j)
//	{
//		array[l] = arr[i];
//		++i;
//		++l;
//	}
//	l = n;
//	--index;
//	for (int j = n - 1; j >= 0; --j)
//	{
//		array[--l] = arr[index];
//		--index;
//
//	}
//	array[f] = '\0';
//	cout << array << endl;
//	return 0;
//}