//#include <iostream>
//using namespace std;
//float add(int a, int b)
//{
//	double sum = 0;
//	sum = a + b;
//	return sum;
//}
//float sub(int a, int b)
//{
//	double sum = 0;
//	sum = a - b;
//	return sum;
//}
//float multi(int a, int b)
//{
//	double sum = 0;
//	sum = a * b;
//	return sum;
//}
//float divi(int a, int b)
//{
//	double sum;
//	sum = a / b;
//	return sum;
//}
//float mod(int a, int b)
//{
//	float sum =0;
//	sum = a % b;
//	return sum;
//}
//float expo(int a, int b)
//{
//	float sum = 0;
//	if (b == 0)
//	{
//		sum = 1;
//	}
//	float sum = a;
//	for (int i = 1; i <= b; i++)
//	{
//		if (i == 1)
//		{
//			sum = a;
//		}
//		else if (i > 1)
//		{
//			sum = sum * a;
//		}
//	}
//	return sum;
//
//}
//int main()
//{
//	cout << "WELCOME TO CALCULATOR!" << endl;
//	cout << "Enter" << endl;
//	cout << endl;
//	cout << "+ for multiplication operation:" << endl;
//	cout << "- for subtraction operation:" << endl;
//	cout << "* for multiplication operation:" << endl;
//	cout << "/ for division operation:" << endl;
//	cout << "% for modulus operation:" << endl;
//	cout << "^ for exponentional operation:" << endl;
//	cout << "q for quit operation:" << endl;
//	char a;
//	cout << "enter option:" << endl;
//	cin >> a;
//	int x;
//	int y;
//	float sum = 0;
//			switch (a)
//			{
//			case '+':
//
//				cout << "Enter first operand:";
//				cin >> x;
//				cout << "Enter second operand:";
//				cin >> y;
//				sum = add(x, y);
//				cout << sum << endl;
//
//				break;
//			case '-':
//				cout << "Enter first operand:";
//				cin >> x;
//				cout << "Enter second operand:";
//				cin >> y;
//				sum = sub(x, y);
//				cout << sum << endl;
//
//				break;
//			case '*':
//
//				cout << "Enter first operand:";
//				cin >> x;
//				cout << "Enter second operand:";
//				cin >> y;
//				sum = multi(x, y);
//				cout << sum << endl;
//
//				break;
//			case '/':
//
//				cout << "Enter first operand:";
//				cin >> x;
//				cout << "Enter second operand:";
//				cin >> y;
//				sum = divi(x, y);
//				cout << sum << endl;
//
//				break;
//			case '^':
//
//				cout << "Enter first operand:";
//				cin >> x;
//				cout << "Enter second operand:";
//				cin >> y;
//				sum = expo(x, y);
//				cout << sum << endl;
//
//				break;
//			case '%':
//
//				cout << "Enter first operand:";
//				cin >> x;
//				cout << "Enter second operand:";
//				cin >> y;
//				sum = mod(x, y);
//				cout << sum << endl;
//
//				break;
//			case 'q':
//				cout << "quit" << endl;
//
//				break;
//			default:
//				cout << "Wrong input." << endl;
//				break;
//			}
//	cout << endl;
//	return 0;
//}