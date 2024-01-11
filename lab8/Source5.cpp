//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	cout << "Enter a sentence:";
//	cin.getline(arr, 100);
//	int count = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		count++;
//		if (arr[i] == '.')
//		{
//			break;
//		}
//	}
//	int pr = 0;
//	int max = INT_MIN;
//	int s = 0;
//	int v = 0;
//	for (int i = 0; i < count; i++)
//	{
//		if (arr[i] == ' '|| arr[i]=='.')
//		{
//			if (s > max)
//			{
//				max = s;
//				v = i;
//		    }
//			s = 0;
//		}
//		else
//		{
//			s++;
//		}
//	}
//	char arr1[100];
//	int k = 0;
//	int j = (v - max);
//	for (j; j<v;j++ )
//	{
//		arr1[k] = arr[j];
//		k++;
//	}
//	arr1[k] = { '\0' };
//	cout <<"The biggest word in sentence is " << arr1 << " starting at postion " << j<<" ."<< endl;
//	cout << endl;
//	return 0;
//}