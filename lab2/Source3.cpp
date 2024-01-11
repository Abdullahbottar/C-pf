//#include <iostream>
//using namespace std;
//int main()
//{
//	int number1, number2;
//	cout << "enter the value of number 1:";
//	cin >> number1;
//	cout << "enter the value of number 2:";
//	cin >> number2;
//	if (number1 < 0)
//	{
//		while (number1 < 0)
//		{
//			cout << "enter the value of number 1:";
//			cin >> number1;
//		}
//	}
//	if (number2 < 0)
//	{
//		while (number2 < 0)
//		{
//			cout << "enter the value of number 2:";
//			cin >> number2;
//		}
//	}
//
//	int input;
//
//	cout << "Press 1 for Division." << endl;
//	cout << "Press 2 for Multiplication." << endl;
//	cout << "Press 3 for Addition." << endl;
//	cout << "Press 4 for Subtraction." << endl;
//	cout << "Press 5 for modulus." << endl;
//	cout << "enter yor choice:";
//	cin >> input;
//	if (input < 0)
//	{
//		while (input < 0)
//		{
//			cout << "enter yor choice:";
//			cin >> input;
//	    }
//    }
//	float res;
//	switch (input)
//	{
//	case 1:
//		res = number1 / number2;
//		cout << "Answer: " << res << endl;
//		break;
//	case 2:
//		res = number1 * number2;
//		cout << "Answer: " << res << endl;
//		break;
//	case 3:
//		res = number1 + number2;
//		cout << "Answer: " << res << endl;
//		break;
//	case 4:
//		res = number1 - number2;
//		cout << "Answer: " << res << endl;
//		break;
//	case 5:
//		res = number1 % number2;
//		cout << "Answer: " << res << endl;
//		break;
//	default:
//		cout << "wrong input." << endl;
//		break;
//	}
//	system("pause");
//	return 0;
//}
