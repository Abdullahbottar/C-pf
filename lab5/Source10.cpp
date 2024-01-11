//#include <iostream>
//using namespace std;
//int timediff(int s1, int m1, int h1, int h2, int m2, int s2, int sd, int md, int hd)
//{
//	if (s2 >= 0 || s1 >= 0)
//	{
//		if (s2 < s1)
//		{
//			--m2;
//			s2 += 60;
//			sd = s2 - s1;
//		}
//		else
//		{
//			sd = s2 - s1;
//		}
//	}
//	if (m2 >= 0 || m1 >= 0)
//	{
//		if (m2 < m1)
//		{
//			--h2;
//			m2 += 60;
//			md = m2 - m1;
//		}
//		else
//		{
//			md = m2 - m1;
//		}
//	}
//	hd = h2 - h1;
//	int ts;
//	ts = (hd * 3600) + (md * 60) + sd;
//	cout << "The total second are " << ts << endl;
//	cout << "The hour difference is " << hd << endl;
//	cout << "The minute difference is " << md << endl;
//	cout << "The second difference is " << sd << endl;
//
//
//	return ts;
//}
//int main()
//{
//	int s1, m1, h1, h2, m2, s2, md=0, hd=0, sd=0;
//	cout << "Enter seconds for first time:";
//	cin >> s1;
//	cout << "Enter minutes for first time:";
//	cin >> m1;
//	cout << "Enter hours for first time:";
//	cin >> h1;
//	cout << "Enter seconds for second time:";
//	cin >> s2;
//	cout << "Enter minutes for second time:";
//	cin >> m2;
//	cout << "Enter hours for second time:";
//	cin >> h2;
//	int ts;
//	ts = timediff(s1, m1, h1, h2, m2, s2, md, hd, sd);
//	cout << "The second difference is " << ts << endl;
//
//	cout << endl;
//	return 0;
//
//}
