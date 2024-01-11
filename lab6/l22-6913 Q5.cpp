//#include <iostream>
//using namespace std;
//void calculategpa(int c)
//{
//	char a;
//	double tcred = 0;
//	double tch = 0;
//	double ch = 0;
//	int i = 1;
//	while (c >= 1)
//	{
//		cout << "Enter your grade in " << i << " course:";
//		cin >> a;
//		/*if (a != 'A' || a != 'A-' || a != 'B+' || a != 'B-' || a != 'B' || a != 'C+' || a != 'C' || a != 'D' || a != 'F')
//		{
//			while (a != 'A' || a != 'A-' || a != 'B+' || a != 'B-' || a != 'B' || a != 'C+' || a != 'C' || a != 'D' || a != 'F')
//			{
//				cout << " Correctly enter your grade in first course:";
//				cin >> a;
//			}
//		}*/
//		float cred = 0;
//		if (a == 'A')
//		{
//			cred = 4;
//		}
//		if (a == 'B')
//		{
//			cred = 3.00;
//		}
//		if (a == 'C')
//		{
//			cred = 2.00;
//		}
//		if (a == 'D')
//		{
//			cred = 1.00;
//		}
//		if (a == 'F')
//		{
//			cred = 0;
//		}
//		cout << "Enter the credit hours of your course:";
//		cin >> ch;
//		if (ch > 3)
//		{
//			while (ch > 3)
//			{
//				cout << "Correctly enter the credit hours of your course:";
//				cin >> ch;
//			}
//		}
//		tch = tch + ch;
//		tcred = (cred * ch) + tcred;
//		--c;
//		++i;
//	}
//	float gpa = tcred / tch;
//	cout << "Your gpa is:" << gpa << endl;
//}
//int main()
//{
//	int ts;
//	cout << "How many courses gpa you want to find?  :";
//	cin >> ts;
//	if (ts < 0)
//	{
//		while (ts < 0)
//		{
//			cout << "Enter the correct value of total courses:";
//			cin >> ts;
//		}
//	}
//	calculategpa(ts);
//	cout << endl;
//	return 0;
//}