//#include <iostream>
//#include <string>
//using namespace std;
//bool isSubmatrix(int matrix[][5], int submatrix[][3], int n, int m) {
//    for (int i = 0; i <= n - m; ++i)
//  {
//        for (int j = 0; j <= n - m; ++j) 
//       {
//            bool match = true;
//            for (int k = 0; k < m; ++k) 
//           {
//                for (int l = 0; l < m; ++l) 
//                   {
//                    if (matrix[i + k][j + l] != submatrix[k][l]) {
//                        match = false;
//                        break;
//                    }
//                }
//                if (!match)
//                    break;
//            }
//            if (match)
//                return true;
//        }
//    }
//    return false;
//}
//int main()
//{
//	int arr[5][5];
//	int arrs[3][3];
//	cout << "enter the big array." << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "element at row " << i + 1 << " column " << j + 1 << " :";
//			cin >> arr[i][j];
//		}
//	}
//	cout << endl;
//	cout << "enter the small array." << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "element at row " << i + 1 << " column " << j + 1 << " :";
//			cin >> arrs[i][j];
//		}
//	}
//	cout << "enter the big array is." << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "the small array is." << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arrs[i][j] << " ";
//		}
//		cout << endl;
//	}
//	if (isSubmatrix(arr, arrs, 5, 3))
//	{
//		cout << "Submatrix found!" << endl;
//	}
//	else
//	{
//		cout << "Submatrix not found." << endl;
//	}
//
//	cout << endl;
//	return 0;
//}