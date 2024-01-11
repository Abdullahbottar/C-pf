//#include <iostream>
//using namespace std;
//void Retail(int n, float c)
//{
//	float sum = 0;
//	sum = ((n * c) / 100) + n;
//	cout << sum << endl;
//}
//int main()
//{
//	int whole = 0;
//	float per = 0;
//	cout << "Enter the whole sale price of a thing:";
//	cin >> whole;
//	cout << "Enter the markup percentage of that material:";
//	cin >> per;
//	if (whole < 0)
//	{
//		while (whole < 0)
//		{
//			cout << "Enter the correct whole sale price of a thing:";
//			cin >> whole;
//		}
//	}
//	if (per < 0)
//	{
//		while (per < 0)
//		{
//			cout << "Enter the markup percentage of that material:";
//			cin >> per;
//		}
//	}
//	if (per > 100)
//	{
//		while (per > 100)
//		{
//			cout << "Enter the markup percentage of that material:";
//			cin >> per;
//		}
//	}
//	cout << endl;
//	cout << "The retail price of material is:";
//	Retail(whole, per);
//	cout << endl;
//
//	system("pause");
//	return 0;
//	
//}