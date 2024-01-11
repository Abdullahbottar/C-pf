//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//void revers(fstream& myfile, fstream &myfile1)
//{
//	string str;
//	myfile.open("array.txt", ios::in);
//	if (myfile.is_open())
//	{
//		while (getline(myfile, str))
//		{
//			myfile >> str;
//		}
//		cout << str << endl;
//		myfile.close();
//	}
//	int n = str.size();
//	int count = 0;
//	if (n % 2 != 0)
//	{
//		count++;
//	}
//	count += n;
//	n--;
//	for (int i = 0; i < count / 2; i++)
//	{
//		char temp = str[i];
//		str[i] = str[n - i];
//		str[n - i] = temp;
//	}
//	cout << str << endl;
//	myfile1.open("reverse.txt", ios::out);
//	if (myfile1.is_open())
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			if (str[i] != '\0')
//			{
//				myfile1 << str[i];
//			}
//			if (str[i] == '\0')
//			{
//				break;
//			}
//		}
//		myfile1.close();
//	}
//}
//int main()
//{
//	char arr[100];
//	cout << "What do you want to write in file.";
//	cin.getline(arr, 100);
//	fstream myfile("array.txt");
//	myfile.open("array.txt", ios::out);
//	if (myfile.is_open())
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			if (arr[i] != '\0')
//			{
//				myfile << arr[i];
//			}
//			if (arr[i] == '\0')
//			{
//				break;
//			}
//		}
//		myfile.close();
//	}
//	fstream myfile1("reverse.txt");
//	revers(myfile, myfile1);
//
//
//
//	return 0;
//}
