//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//void overall(ofstream& fileStream,int arr11[][3], char arr1[][30])
//{
//	fileStream.open("hellogg.txt");
//	if(fileStream.is_open(),ios::app,ios::out)
//	{ 
//		for (int i = 0; i < 5; i++)
//		{
//			cout << arr1[i] << " ";
//			fileStream << arr1[i] << " ";
//			for (int j = 0; j < 3; j++)
//			{
//				cout << arr11[i][j] << " ";
//				fileStream << arr11[i][j] << " ";
//			}
//			cout << endl;
//			fileStream << endl;
//		}
//		fileStream.close();
//	}
//}
//int main()
//{
//	char arr1[5][30];
//	cout << "Enter the player name." << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "player " << i + 1 << " ";
//		cin.getline(arr1[i], 30);
//	}
//	cout << endl;
//	char arr2[5][30];
//	cout << "Enter the player1 name." << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "player " << i + 1 << " ";
//		cin.getline(arr2[i], 30);
//	}
//	int count = 1;
//	int arr11[5][3];
//	int arr22[5][3];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			arr11[i][j] = count ++;
//			arr22[i][j] = count++;
//		}
//	}
//	ofstream filestream;
//	overall(filestream,arr11, arr1);
//	cout << endl;
//	overall(filestream,arr22, arr2);
//
//
//
//	system("pause");
//	return 0;
//}