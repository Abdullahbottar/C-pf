//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	int s = 0;
//	int v = 0;
//	fstream myfile;
//	myfile.open("number.txt", ios::in);
//	if (myfile.is_open())
//	{
//		int n;
//		while (myfile>>n)
//		{
//			if (n % 2 == 0)
//			{
//				myfile.open("evennumber.txt", ios::out);
//				if (myfile.is_open())
//				{
//					myfile << n << endl;
//					myfile.close();
//					s++;
//				}
//				else
//				{
//					myfile.open("oddnumber.txt", ios::out);
//					if (myfile.is_open())
//					{
//						myfile << n << endl;
//						myfile.close();
//						v++;
//					}
//
//				}
//			}
//		}
//		myfile.close();
//	}
//	cout << s << endl;
//	cout << v << endl;
//	return 0;
//}
