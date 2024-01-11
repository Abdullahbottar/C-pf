#include <iostream>
using namespace std;
int main()
{
	float heighti, wieght, heightf;
	cout << "Enter your weight in pounds:";
	cin >> wieght;
	cout << "Enter your hieght in foot:";
	cin >> heightf;
	cout << "Enter your hieght in inches:";
	cin >> heighti;
	heightf = (heightf * 12);
	heightf = heightf + heighti;
	heightf *= heightf;
	float bmi;
	bmi = wieght * (703 / heightf);
	cout << "Your BMI is:" << bmi << endl;
	if (bmi > 25)
	{
		cout << "You are over weight" << endl;
	}
	else if (bmi < 18.5)
	{
		cout << "you are under weight" << endl;
	}
	else
	{
		cout << "you have perfect BMI" << endl;
	}
	system("pause");
	return 0;
}