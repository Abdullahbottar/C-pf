//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int sum = 0;
//	int c = 1; 
//	int tsum = 0;
//	cout << "Enter the binary in reverse order:";
//	cout << endl;
//	for (int i = 0; i >= 0; i++)
//	{
//		cout << "Enter the value of binary at position: " << i << " :";
//		cin >> n;
//		if (n != 0 && n != -1 && n!=1)
//		{
//			while (n != 0 && n != -1 && n !=1)
//			{
//				cout << "Enter the correct value of binary:";
//				cin >> n;
//				cout << endl;
//			}
//		}
//		if (n == -1)
//		{
//			break;
//		}
//		sum = n * c;
//		tsum = tsum + sum;
//		c *= 2;
//	}
//	cout <<"The binary in decimal is: " << tsum << endl;
//	return 0;
//}