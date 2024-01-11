//#include <iostream>
//using namespace std;
//void rotatearr(char arr[], int s, int n)
//{
//	while (n > 0)
//	{
//		char temp = arr[0];
//		for (int i = 1; i < s; i++)
//		{
//			char temp1 = arr[i];
//			arr[i] = temp;
//			temp = temp1;
//		}
//		arr[0] = temp;
//		--n;
//	}
//}
//int main()
//{
//	char arr[100];
//	cout << "Enter the array:";
//	cin.getline(arr, 100);
//	int s = strlen(arr);
//	int n = 0;
//	cout << "Enter the value of shifting:";
//	cin >> n;
//	if (n < 0 ||n>s)
//	{
//		while (n < 0|| n>s)
//		{
//			cout << "Enter the correct value of n:";
//			cin >> n;
//		}
//	}
//	cout << endl;
//	rotatearr(arr, s, n);
//	cout << arr << endl;
//	cout << endl;
//	return 0;
//}
