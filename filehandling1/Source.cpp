#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "enter the string:";
	getline(cin, str);
	fstream filename("hello.txt");
	if (filename.is_open(), ios::app)
	{
		filename << str << endl;
		filename.close();
	}
	ifstream name("hello.txt");
	string word;
	if (name.is_open())
	{
		while (getline(name, word))
		{
			cout << word << endl;
		}

	}




	cout << endl;
	return 0;
}