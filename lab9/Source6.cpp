//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int s = 0;
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		s++;
//	}
//	//for (int i = 0; i < s; i++)
//	//{
//	//	char c = arr[i];
//	//	int v = int(c);
//	//	if (v >= 65 && v <= 90)
//	//	{
//	//		v += 32;
//	//		c = char(v);
//	//		arr[i] = c;
//	//	}
//	//}
//	//for (int i = 0; i < s; i++)
//	//{
//	//	char temp = 0;
//	//	for (int i = 0; i < s-1; i++)
//	//	{
//	//		if (arr[i] > arr[i + 1])
//	//		{
//	//			temp = arr[i];
//	//			arr[i] = arr[i + 1];
//	//			arr[i + 1] = temp;
//	//		}
//	//	}
//	//}
//	//cout << arr << endl;
//	//int count = 0;
//	//if (s % 2 != 0)
//	//{
//	//	count = s / 2;
//	//	count += 1;
//	//}
//	//else
//	//{
//	//	count = s / 2;
//	//}
//	//s--;
//	//int j = 0;
//	//for (int i = s; i >=count; i--)
//	//{
//	//	char temp = arr[j];
//	//	arr[j] = arr[i];
//	//	arr[i] = temp;
//	//	j++;
//	//}
//	//s++;
//	cout << arr << endl;
//	int n = 0;
//	cout << "Enter the shifting value:";
//	cin >> n;
//	if (n > s - 1 || n < 0)
//	{
//		while (n > s - 1 || n < 0)
//		{
//			cout << "Enter the correct value of n:";
//			cin >> n;
//		}
//	}
//	char arr1[100];
//	int j = 0;
//	int v = s - n;
//	for (j; j < n; j++)
//	{
//		arr1[j] = arr[v];
//		v++;
//	}
//	v--;
//	int i = 0;
//	for (j; j < s; j++)
//	{
//		if (i < s)
//		{
//			arr1[j] = arr[i];
//			i++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	arr1[j] = { '\0' };
//	cout << arr1 << endl;
//	return 0;
//}