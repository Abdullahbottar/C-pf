//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "\t\t\t\t\tWELCOME TO OFFER DETAIL" << endl;
//	cout << "\n \n";
//	cout << "\t \t  MEGA PACAKAGE            599/ruppes" << endl;
//	cout << "1- Offnet Minutes = 1500 -- (1.50 ruppee per minute for additional)" << endl;
//	cout << "2- On-Net Minutes = 2500 -- (0.75 ruppee per minute for additional)" << endl;
//	cout << "3- SMS            =  700 -- (0.5 ruppee per SMS for additional)" << endl;
//	cout << "4- Mobile Data    = 10GB -- (8.5 ruppee per GB for addtional)" << endl;
//	cout << "\n";
//	cout << "\t \t  SUPREME PACAKAGE        1199/ruppes" << endl;
//	cout << "1- Offnet Minutes = 2000 -- (1.25 ruppee per minute for additional)" << endl;
//	cout << "2- On-Net Minutes = 3000 -- (0.65 ruppee per minute for additional)" << endl;
//	cout << "3- SMS            = 1000 -- (0.45 ruppee per SMS for additional)" << endl;
//	cout << "4- Mobile Data    = 20GB -- (6.5 ruppee per GB for addtional)" << endl;
//	cout << "\n ";
//	cout << "\t \t  PREMIUM PACAKAGE        2500/ruppes" << endl;
//	cout << "1- Offnet Minutes = UNLIMITED" << endl;
//	cout << "2- On-Net Minutes = UNLIMITED" << endl;
//	cout << "3- SMS            = UNLIMITED" << endl;
//	cout << "4- Mobile Data    = UNLIMITED" << endl;
//	cout << "\n\n";
//	float ofmin, onmin, sms, gb;
//	int s = 0;
//	cout << "How much extra off minutes you want:";
//	cin >> ofmin;
//	cout << "how much extra on-minutes you want:";
//	cin >> onmin;
//	cout << "how much extra sms you want:";
//	cin >> sms;
//	cout << "how much extra gbs you want:";
//	cin >> gb;
//	float v;
//	v = ofmin + onmin;
//	if (v > 10080)
//	{
//		while (v <= s)
//		{
//			cout << "enter the correct number of off minutes:";
//			cin >> ofmin;
//			cout << "enter the correct number of on minutes:";
//			cin >> onmin;
//		}
//	}
//	else if (sms < 0)
//	{
//		while (sms <= s)
//		{
//			cout << "enter the correct number of sms:";
//			cin >> sms;
//		}
//	}
//	else if (gb < 0)
//	{
//		while (gb <= s)
//		{
//			cout << "enter the correct number of gb:";
//			cin >> gb;
//		}
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//	/*int balance;
//	cout << "How Much Balance You Have:";
//	cin >> balance;
//	cout << "\n\n";
//	cout << "Press 1 to subscribe Mega Pacakage:" << endl;
//	cout << "Press 2 to subscribe Supreme Pacakage:" << endl;
//	cout << "Press 3 to subscribe Premium Pacakage:" << endl;
//	cout << "Press 4 to Exit OFFER DETAIL:" << endl;
//	int input;
//	int ofmin, onmin, sms, gb;
//	int a = 0, s = 0, d = 0;
//	int m = 599, s = 1199, p = 2500;
//	cout << "What do You want:";
//	cin >> input;
//	if (input > 0)
//	{
//		system("CLS");
//	}
//	int cbalance;
//	switch (input)
//	{
//	case 1:
//		if (balance > m)
//		{
//			cout << "SUCESSFULLY SUBSCRIBED" << endl;
//			cbalance = balance - m;
//			cout << "YOUR CURRENT BALANCE IS: " << cbalance << endl;
//			cout << "\n";
//			cout << "do you want to make additional changes." << endl;
//			cout << "PRESS 1 TO MAKE ANY CHANGES:" << endl;
//			cout << "PRESS 2 TO EXIT:" << endl;
//			cin >> input;
//		}
//		else
//		{
//			cout << "YOU HAVE INSUFFIENT FUNDS" << endl;
//		}
//		break;
//	case 2:
//		if (balance > s)
//		{
//			cout << "SUCESSFULLY SUBSCRIBED" << endl;
//			cbalance = balance - s;
//			cout << "YOUR CURRENT BALANCE IS: " << cbalance << endl;
//		}
//		else
//		{
//			cout << "YOU HAVE INSUFFIENT FUNDS" << endl;
//		}
//		break;
//	case 3:
//		if (balance > p)
//		{
//			cout << "SUCESSFULLY SUBSCRIBED" << endl;
//			cbalance = balance - p;
//			cout << "YOUR CURRENT BALANCE IS: " << cbalance << endl;
//		}
//		else
//		{
//			cout << "YOU HAVE INSUFFIENT FUNDS" << endl;
//		}
//		break;
//	case 4:
//		system("CLS");
//		break;
//	default:
//		cout << "wrong choice" << endl;
//		break;
//	}
//	system("pause");*/
//	return 0;
//}