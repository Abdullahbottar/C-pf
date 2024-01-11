//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Press 1 for calculating circle area." << endl;
//	cout << "Press 2 for calculating rectangle area." << endl;
//	cout << "Press 3 for calculating triangle area." << endl;
//	cout << "Press 4 to exit the program." << endl;
//	int input;
//	float area;
//	cout << "enter your choice:";
//	cin >> input;
//	switch (input)
//	{
//	case 1:
//		float r;
//		cout << "Enter circles radius:";
//		cin >> r;
//		r *= r;
//		area = (3.14159) * r;
//		cout << "The circles area is:" << area << endl;
//		break;
//	case 2:
//		float l, w;
//		cout << "Enter the rectangles widht:";
//		cin >> w;
//		cout << "Enter the rectangles lenght:";
//		cin >> l;
//		area = l * w;
//		cout << "The rectangles area is:" << area << endl;
//		break;
//	case 3:
//		float h, b;
//		cout << "Enter triangles hieght:";
//		cin >> h;
//		cout << "Enter the triangles base:";
//		cin >> b;
//		area = (b * h) * 0.5;
//		cout << "The triangles area is:" << area << endl;
//		break;
//	case 4:
//		break;
//	default:
//		cout << "Invalid choice" << endl;
//		break;
//	}
//
//
//
//
//	system("pause");
//	return 0;
//}