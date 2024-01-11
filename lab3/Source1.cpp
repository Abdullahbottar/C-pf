//#include <iostream>
//using namespace std;
//double addition(float j, float k)
//{
//	int an = 0;
//	an = j + k;
//	return an;
//}
//double subtraction(float h, float i)
//{
//	int ans = 0;
//	ans = h - i;
//	return ans;
//}
//double multiplication(float f, float g)
//{
//	int answ = 0;
//	answ = f * g;
//	return answ;
//}
//double division(float x, float y)
//{
//	int answe = 0;
//	answe = x / y;
//	return answe;
//}
//int main()
//{
//	float a, b;
//	cout << "enter the first number:";
//	cin >> a;
//	cout << "enter the second number:";
//	cin >> b;
//    if (a < 0)
//	{
//		while (a < 0)
//		{
//			cout << "\n";
//			cout << "enter the value of a number:";
//			cin >> a;
//		}
//	}
//	if (b < 0)
//	{
//		while (b < 0)
//		{
//			cout << "\n";
//			cout << "enter the value of power number:";
//			cin >> b;
//		}
//	}
//	cout << "\n";
//	int roll_no;
//	cout << "enter your roll number:";
//	cin >> roll_no;
//	cout << "\n";
//	float sum = 0;
//	int input;
//	cout << "press 1 for division:" << endl;
//	cout << "press 2 for multiplication:" << endl;
//	cout << "press 3 for addition:" << endl;
//	cout << "press 4 for subtraction:" << endl;
//	cout << "\n";
//	cout << "enter your choice:";
//	cin >> input;
//	if (input == 1)
//	{
//		sum = division(a, b);
//		cout << sum << endl;
//		roll_no = roll_no + sum;
//		cout << "sum with roll number is: " << roll_no << endl;
//	}
//	else if (input == 2)
//	{
//		sum = multiplication(a, b);
//		cout << sum << endl;
//		roll_no = roll_no + sum;
//		cout << "sum with roll number is: " << roll_no << endl;
//	}
//	else if (input == 3)
//	{
//		sum = addition(a, b);
//		cout << sum << endl;
//		roll_no = roll_no + sum;
//		cout << "sum with roll number is: " << roll_no << endl;
//	}
//	else if (input == 4)
//	{
//		sum = subtraction(a, b);
//		cout << sum << endl;
//		roll_no = roll_no + sum;
//		cout << "sum with roll number is: " << roll_no << endl;
//	}
//	else 
//	{
//		cout << "wrong input." << endl;
//	}
//	system("pause");
//	return 0;
//}