//#include <iostream>
//using namespace std;
//bool palindrome(char arr[], int size)
//{
//	bool flag = true;
//	int index = strlen(arr);
//	for (int i = 0; i < index; i++)
//	{
//		if (arr[i] != arr[index - 1 - i])
//		{
//			flag = false;
//			break;
//		}
//	}
//	if (flag == true)
//	{
//		cout << "the number is planindrome.";
//		cout << endl;
//	}
//	else
//	{
//		cout << "the number is not palindrome." << endl;
//	}
//	return flag;
//}
//int main()
//{
//	char arr[100];
//	cout << "enter the array.";
//	cin.getline(arr, 100);
//	palindrome(arr, 100);
//	cout << endl;
//	return 0;
//}