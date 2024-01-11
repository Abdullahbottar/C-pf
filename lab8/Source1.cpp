//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	char arr1[100];
//	int n;
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	cout << "Enter the shifting value:";
//	cin >> n;
//	int s = strlen(arr);
//	if (n < 0 || n >= s)
//	{
//		while (n < 0 || n >= s-1)
//		{
//			cout << "Enter correct shifting value:";
//			cin >> n;
//		}
//	}
//	int i = 0;
//	int v = s - n;
//	for ( i; i < n; i++)
//	{
//		arr1[i] = arr[v];
//		++v;
//	}
//	--v;
//	int j = 0;
//	for (i; i < s; i++)
//	{
//		if (j < v)
//		{
//			arr1[i] = arr[j];
//			++j;
//		}
//		else
//		{
//			break;
//		}
//	}
//	arr1[i] = { '\0' };
//	cout << arr1 << endl;
//
//	return 0;
//}