////#include <iostream>
////using namespace std;
////int main()
////{
////	cout << "\t\t\t\t\tWELCOME TO OFFER DETAIL" << endl;
////	cout << "\n \n";
////	cout << "\t \t  MEGA PACAKAGE            599/ruppes" << endl;
////	cout << "1- Offnet Minutes = 1500 -- (1.50 ruppee per minute for additional)" << endl;
////	cout << "2- On-Net Minutes = 2500 -- (0.75 ruppee per minute for additional)" << endl;
////	cout << "3- SMS            =  700 -- (0.5 ruppee per SMS for additional)" << endl;
////	cout << "4- Mobile Data    = 10GB -- (8.5 ruppee per GB for addtional)" << endl;
////	cout << "\n";
////	cout << "\t \t  SUPREME PACAKAGE        1199/ruppes" << endl;
////	cout << "1- Offnet Minutes = 2000 -- (1.25 ruppee per minute for additional)" << endl;
////	cout << "2- On-Net Minutes = 3000 -- (0.65 ruppee per minute for additional)" << endl;
////	cout << "3- SMS            = 1000 -- (0.45 ruppee per SMS for additional)" << endl;
////	cout << "4- Mobile Data    = 20GB -- (6.5 ruppee per GB for addtional)" << endl;
////	cout << "\n ";
////	cout << "\t \t  PREMIUM PACAKAGE        2500/ruppes" << endl;
////	cout << "1- Offnet Minutes = UNLIMITED" << endl;
////	cout << "2- On-Net Minutes = UNLIMITED" << endl;
////	cout << "3- SMS            = UNLIMITED" << endl;
////	cout << "4- Mobile Data    = UNLIMITED" << endl;
////	cout << "\n\n";
////	int input;
////	cout << "WHICH PACKAGE YOU WANT:";
////	cin >> input;
////	if (input > 3)
////	{
////		while (input > 3)
////		{
////			cout << "\n";
////			cout << "enter correct input:";
////			cin >> input;
////		}
////	}
////	if (input < 0 )
////	{
////		while (input < 0)
////		{
////			cout << "\n";
////			cout << "enter correct input:";
////			cin >> input;
////		}
////	}
////
////	float ofmin, onmin, sms, gb, tm;
////	int s = 0;
////	int v = 10080;
////	if (input < 3)
////	{
////		cout << "How much extra off minutes you want:";
////		cin >> ofmin;
////		cout << "how much extra on-minutes you want:";
////		cin >> onmin;
////		cout << "how much extra sms you want:";
////		cin >> sms;
////		cout << "how much extra gbs you want:";
////		cin >> gb;
////		if (ofmin < 0)
////		{
////			while (ofmin < s)
////			{
////				cout << "\n";
////				cout << "How much extra off minutes you want:";
////				cin >> ofmin;
////			}
////		}
////		if (sms < 0)
////		{
////			while (sms < s)
////			{
////				cout << "\n";
////				cout << "how much extra sms you want:";
////				cin >> sms;
////			}
////		}
////		if (onmin < 0)
////		{
////			while (onmin < s)
////			{
////				cout << "\n";
////				cout << "how much extra on-minutes you want:";
////				cin >> onmin;
////			}
////		}
////		if (gb < 0)
////		{
////			while (gb < s)
////			{
////				cout << "\n";
////				cout << "how much extra gbs you want:";
////				cin >> gb;
////			}
////		}
////		if ((ofmin + onmin) > v)
////		{
////			while ((ofmin + onmin) > v)
////			{
////				cout << "\n";
////				cout << "How much extra off minutes you want:";
////				cin >> ofmin;
////				cout << "how much extra on-minutes you want:";
////				cin >> onmin;
////				cout << "\n";
////			}
////		}
////
////		system("CLS");
////		if (input == 1)
////		{
////			gb = gb * 8.5;
////			sms = sms * 0.5;
////			ofmin = ofmin * 1.5;
////			onmin = onmin * 0.75;
////			tm = gb + sms + ofmin + onmin + 599;
////			cout << "YOUR TOTAL IS:  " << tm << endl;
////		}
////		if (input == 2)
////		{
////			gb = gb * 6.5;
////			sms = sms * 0.45;
////			ofmin = ofmin * 1.25;
////			onmin = onmin * 0.65;
////			tm = gb + sms + ofmin + onmin + 1199;
////			cout << "YOUR TOTAL IS:  " << tm << endl;
////		}
////	}
////	if (input == 3)
////	{
////
////		tm = 2500;
////		cout << "YOUR TOTAL IS:  " << tm << endl;
////	}
////
////
////	system("pause");
////	return 0;
////}
//float fare, tfare, dfare;
//cout << "do you have a promo code." << endl;
//cout << "press 1 for yes:" << endl;
//cout << "press 2 for no:" << endl;
//int i;
//cout << "enter your answer:";
//cin >> i;
//int dis = 0;
//float taxid, compt, govern;
//taxid = (dfare * 70) / 100;
//compt = (dfare * 20) / 100;
//govern = (dfare * 10) / 100;
//cout << "taxi driver cut is:" << taxid << ". " << endl;
//cout << "company cut is:" << compt << ". " << endl;
//cout << "goverment cut is:" << govern << ". " << endl;