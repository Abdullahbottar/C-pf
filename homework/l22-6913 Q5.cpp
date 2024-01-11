//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "The number of citation should be double than the articales published." << endl;
//	float cita, artipub;
//	cout << "Enter the number of articales published:";
//	cin >> artipub;
//	cout << "Enter the number of citations:";
//	cin >> cita;
//	int c = 0;
//	if (cita < 0)
//	{
//		while (cita < c)
//		{
//			cout << "Enter the correct number of citations:";
//			cin >> cita;
//		}
//	}
//	if (artipub < 0)
//	{
//		while (artipub < c)
//		{
//			cout << "Enter the correct number of publication:";
//			cin >> artipub;
//		}
//	}
//	if (cita > 0 && artipub > 0)
//	{
//		while (cita < (artipub *2))
//		{	
//		cout << "Enter the correct number of citations:";
//		cin >> cita;	
//		}
//		if (cita >= (artipub * 2))
//		{
//			float impfac;
//			impfac = (cita / artipub);
//			cout << "The JCR is:" << impfac << endl;
//			double s;
//			s = impfac;
//
//			if (s >= 2 && s <= 3.9)
//			{
//				cout << "The category of JCR is:4" << endl;
//			}
//			else if (s >= 4 && s<= 5.9)
//			{
//				cout << "The category of JCR is:3" << endl;
//			}
//			else if (s >= 6 && s <= 7.9)
//			{
//				cout << "The category of JCR is:2" << endl;
//			}
//			else if (s >= 8)
//			{
//				cout << "The category of JCR is:1" << endl;
//			}
//		}
//
//	}
//	
//	system("pause");
//	return 0;
//}