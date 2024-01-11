//#include <iostream>
//using namespace std;
//int main()
//{
//	int v = 0;
//	int arr[10];
//	cout << "enter the array." << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "element " << i + 1 << " :";
//		cin >> arr[i];
//		if (arr[i] == -1)
//		{
//			break;
//		}
//		v++;
//	}
//	arr[v] = '\0';
//	cout << "your correct values"<< v <<" are." << endl;
//	for (int i = 0; i < v; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < v; i++)
//	{
//		for (int i = 0; i < v-1; i++)
//		{
//			if (arr[i+1] < arr[i])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	cout << "your correct sorted values" << v << " are." << endl;
//	for (int i = 0; i < v; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	int numb = 0;
//	cout << "enter the number:";
//	cin >> numb;
//	int arr1[10] = { 0 };
//	for (int i = 0; i < v; i++)
//	{
//		for (int j = 0; j < v; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				arr1[i]++;
//			}
//		}
//	}
//	for (int i = 0; i < v; i++)
//	{
//		if (arr1[i] == numb)
//		{
//			cout << arr[i] << endl;
//		}
//	}
//
//
//
//	system("pause");
//	return 0;
//}