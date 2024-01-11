#include <iostream>
using namespace std;
int main()
{
	int hieght, wieght;
	cout << "Enter your weight in pounds:";
	cin >> wieght;
	cout << "Enter your hieght in inches:";
	cin >> hieght;
	float bmi;
	cout << "Your BMI is:" << bmi << endl;
	bmi = wieght * (703 / (hieght * hieght));
	if (bmi > 25)
	{
		cout << "You are over weight" << endl;
	}
	if (bmi > 18.5)
	{
		cout << "you are under weight" << endl;
	}
	else
	{
		cout << "you have perfect weight" << endl;
	}
	system("pause");
	return 0;
}