//#include <iostream>
//using namespace std;
//bool haschar(char arr[], char tar)
//{
//	int index = strlen(arr);
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] == tar)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//void freq(char arr[], int size)
//{
//	int index = strlen(arr);
//	char uniq[100]="";
//	int uindex = 0;
//	for (int i = 0; i < index; i++)
//	{
//		if (haschar(uniq, arr[i]) == false)
//		{
//			uniq[uindex] = arr[i];
//			++uindex;
//		}
//
//	}
//	uniq[uindex] = '\0';
//	for (int i = 0; i <= uindex; i++)
//	{
//		int freq = 0;
//		for (int j = 0; j < index; j++)
//		{
//				if (uniq[i] == arr[j])
//				{
//					++freq;
//				}
//				else
//				{
//					continue;
//				}
//			
//		}
//	
//		if (freq > 0)
//		{
//			cout << uniq[i] << "\t" << freq << endl;
//		}
//		else
//		{
//			continue;
//		}
//		
//	}
//}
//int main()
//{
//	char arr[100];
//	cout << "enter the array: ";
//	cin.getline(arr, 100);
//	freq(arr, 100);
//	cout << endl;
//	return 0;
//}
///*if (freq > 0)
//				{
//						bool flag = false;
//					if (strlen(uniq) > 0)
//					{
//						for (int k = 0; k < strlen(uniq); k++)
//						{
//							if (uniq[k] == arr[i])
//							{
//								flag = true;
//							}
//						}
//					}
//					else if (flag == true)
//					{
//						uniq[uindex] = arr[i];
//						++uindex;
//					}
//					else
//					{
//					uniq[uindex] = arr[i];
//					++uindex;
//					}
//				}*/