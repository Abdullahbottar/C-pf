//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//	int m = 0;
//	int n = 0;
//	cout << "enter m:";
//	cin >> m;
//	cout << "enter n:";
//	cin >> n;
//	cout << "enter matrix vals:";
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << "val at " << i + 1 << " col " << j + 1 << " :";
//			cin >> arr[i][j];
//		}
//	}
//	cout << endl;
//	cout << "you entered:" << endl;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int k = 2;
//	int v = (k * k) / 2;
//	int count = v;
//	int index = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			int temp = i;
//			int temp1 = j;
//			index = 0;
//			if (i + k < m && j + k <= n)
//			{
//				for (int l = 0; l < k; l++)
//				{
//					int temp1 = j;
//					for (int s = 0; s < k; s++)
//					{
//						if (arr[i][j] == 0)
//						{
//							index++;
//							j++;
//						}
//						else
//						{
//							break;
//						}
//					}
//					i++;
//					j = temp1;
//					if (index < count)
//					{
//						cout << "yes" << endl;
//						break;
//					}
//					if (index < count)
//					{
//						i = temp;
//						j = temp1;
//						break;
//					}
//				}
//			}
//		}
//	}
//
//
//
//
//
//
//
//
//	return 0;
//}