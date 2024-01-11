//#include <iostream>
//using namespace std;
//int main()
//{
//	float sum = 0;
//	int a = 0;
//	int n=0;
//	int largest = INT_MIN, smallest = INT_MAX;
//	for (int i = 1; i > 0; i++)
//	{
//		cout << "enter the a postive integer:";
//		cin >> n;
//		if (n >= 0)
//		{
//			sum = sum + n;
//			a++;
//
//			if (n > largest)
//			{
//				largest = n;
//			}
//			else if (n < smallest)
//			{
//				smallest = n;
//			}
//		}
//			else if (n <0)
//			{
//				break;
//			}
//	}
//
//	cout << "\n";
//	cout << "the sum of n is:" << sum << endl;
//	float avg = 0;
//	avg = sum / a;
//	cout << "the average of n is:" << avg<< endl;
//	cout << "the largest value of n is:" << largest << endl;
//	cout << "the smallest value of n is:" << smallest << endl;
//	system("pause");
//	return 0;
//}