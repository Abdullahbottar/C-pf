/*
#include <iostream>
using namespace std;
int timeDiff(int h1, int m1, int s1, int h2, int m2, int s2, int& sd, int& hd, int& md, int& sum1, int& sum2, int& TS)
{
	if (h1 > 23 || m1 > 59 || s1 > 59)
	{
		cout << " invalid values enter again" << endl;
	}
	if (h2 > 23 || m2 > 59 || s2 > 59)
	{
		cout << " invalid values enter again" << endl;
	}
	sum1 = h1 * 3600 + m1 * 60 + s1;
	sum2 = h2 * 3600 + m2 * 60 + s2;
	if (h2 > h1)
	{
		hd = h2 - h1;
		TS = sum2 - sum1;
	}
	if (h2 < h1)
	{
		hd = h1 - h2;
		TS = sum1 - sum2;
	}
	if (m2 > m1)
	{
		md = m2 - m1;
	}
	if (m1 > m2)
	{
		md = m1 - m2;
	}
	if (s2 > s1)
	{
		sd = s2 - s1;
	}
	if (s1 > s2)
	{
		sd = s1 - s2;
	}
	cout << "TS:" << TS << endl;
	cout << "hd:" << hd << endl;
	cout << "md:" << md << endl;
	cout << "sd:" << sd << endl;

	return TS, hd, md, sd;
}
int main()
{
	int h1, m1, s1, h2, m2, s2, TS, sd, hd, md, sum1, sum2;
	cout << "enter h1:" << endl;
	cin >> h1;
	cout << "enter m1:" << endl;
	cin >> m1;
	cout << "enter s1:" << endl;
	cin >> s1;
	cout << "enter h2:" << endl;
	cin >> h2;
	cout << "enter m2:" << endl;
	cin >> m2;
	cout << "enter s2:" << endl;
	cin >> s2;
	timeDiff(h1, m1, s1, h2, m2, s2, sd, hd, md, sum1, sum2, TS);
	system("pause");
	return 0;
}*/

/*
#include <iostream>
#include <cmath>
using namespace std;
int coordinateConverter(int r, int a, int x, int y)
{
	// for polar //
	float a;
	a = x / y;
	float theta, radian;
	radian = atan(a);
	theta = radian * 180 / 3.14;

	x = x * x;
	y = y * y;
	float rad = x + y;
	float r = sqrt(rad);
	cout << "(" << r << "," << theta << ")" << endl;

}
int main()
{
	// choose which to convert //
	int choose;
	double x, y, a, r, rad;
	cout << "Enter 1 for polar and 2 for cartisian conversion :" << endl;
	cin >> choose;
	while (choose < 1 || choose > 2)
	{
		cout << "choose valid number:" << endl;
	}
	if (choose == 1)
	{
		cout << "enter r:" << endl;
		cin >> r;
		cout << "enter a : " << endl;
		cin >> a;
		cout << " enter x :" << endl;
		cin >> x;
		cout << " enter y :" << endl;
		cin >> y;
		x = r * cos(a);
		y = r * sin(a);
		cout << " x is :" << x << endl;
		cout << " y is :" << y << endl;
	}
	if (choose == 2)
	{
		cout << "enter r:" << endl;
		cin >> r;
		cout << "enter a : " << endl;
		cin >> a;
		cout << " enter x :" << endl;
		cin >> x;
		cout << " enter y :" << endl;
		cin >> y;
		coordinateConverter(r, a, x, y);

	}


	system("pause");
	return 0;
}*/
/*
#include <iostream>
using namespace std;

int converter(float lat, float lat_minuter, float lon, float lon_minuter, char NEWS)
{
	lat = 60 * lat;
	float latTime = lat + lat_minuter;
	if (NEWS == 'S' || NEWS == 'W' || NEWS == 's' || NEWS == 'w') {
		latTime = -latTime;
	}
	lon = 60 * lon;
	float lonTime = lon + lon_minuter;

	return (latTime, lonTime);
}

int main() {
	float lat, lat_minuter, lon, lon_minuter;
	char NEWS;
	cout << "Enter lat";
	cin >> lat; //float data type
	cout << "Enter lat N,S,E,W";
	cin >> NEWS; //char data type
	cout << "enter lat_minuter";
	cin >> lat_minuter; //float data type

	cout << "Enter lon";
	cin >> lon; //float data type
	cout << "enter lon_minuter";
	cin >> lon_minuter; //float data type

	converter(lat, lat_minuter, lon, lon_minuter, NEWS);
	system("pause");
	return 0;
}*/