//#include <iostream>
//using namespace std;
//int main()
//{
//	int bp, ae;
//	char pos, g;
//	cout << "CALCULATOR TO FIND EMPLOYEES BASIC PAY." << endl;
//	int bonus = 0;
//	cout << "Enter the age of employee:";
//	cin >> ae;
//	if (ae < 0)
//	{
//		while (ae < 0)
//		{
//			cout << "Enter the correct age of employee:";
//			cin >> ae;
//		}
//	}
//	cout << "Enter the gender of employee (F for female) and (M for male):";
//	cin >> g;
//	if (g != 'M' && g != 'F')
//	{
//		while (g != 'M' && g != 'F')
//		{
//			cout << "Correctly enter the gender of employee (F for female) and (M for male):";
//			cin >> g;
//		}
//	}
//	if (g == 'M')
//	{
//		cout << "Enter the position of employee (E for executive)(S for senior)(J for junior):";
//		cin >> pos;
//		if (pos != 'E' && pos != 'S' && pos !='J')
//		{
//			while (pos != 'E' && pos != 'S' && pos != 'J')
//			{
//				cout << "Correctly enter the position of employee (E for executive)(S for senior)(J for junior):";
//				cin >> pos;
//			}
//		}
//		if (ae > 30 && pos == 'E')
//		{
//			bonus = 25;
//			cout << "The bonus of the employee is " << bonus << " %"<< endl;
//		}
//		else if (ae > 30 && pos == 'S')
//		{
//			bonus = 21;
//			cout << "The bonus of the employee is " << bonus << " %" << endl;
//		}
//		else if (ae < 30 && pos == 'J')
//		{
//			bonus = 17;
//			cout << "The bonus of the employee is " << bonus << " %" << endl;
//		}
//		else
//		{
//			cout << "No bonus for the employee" << endl;
//		}
//
//	}
//	else if(g =='F')
//	{
//		cout << "Enter the basic pay of employee:";
//		cin >> bp;
//		if (bp < 0)
//		{
//			while (bp < 0)
//			{
//				cout << "Enter the correct basic pay of employee:";
//				cin >> bp;
//			}
//		}
//		if (bp > 25000 && ae < 25)
//		{
//			bonus = 20;
//			cout << "The bonus of the employee is " << bonus << " %" << endl;
//		}
//		else if (ae > 25 && bp > 50000)
//		{
//			bonus = 25;
//			cout << "The bonus of the employee is " << bonus << " %" << endl;
//		}
//		else
//		{
//			cout << "No bonus for the employee" << endl;
//		}
//	}
//	return 0;
//}