//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100];
//	int size;
//	cout << "Enter the size of the array:";
//	cin >> size;
//	cout << endl;
//	if (size < 0)
//	{
//		while (size < 0)
//		{
//			cout << "enter correct size:";
//			cin >> size;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter elements in array:";
//		cin >> arr[i];
//	}
//	cout << endl;
//	cout << "The array you entered is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		
//		cout << arr[i]<<"\t";
//	}
//	cout << endl;
//	int tar;
//	cout << "Enter the number you want to find in array:";
//	cin >> tar;
//	int h = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == tar)
//		{
//			cout << "The number "<< tar << " is present at : " << i << endl;
//			++h;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	if (h > 0)
//	{
//		
//	}
//	else
//	{
//		cout << "The number " << tar << " is not present in array you entered." << endl;
//	}
//
//	return 0;
//}