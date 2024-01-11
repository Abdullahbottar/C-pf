//#include <iostream>
//using namespace std;
//int mergearr(int arr[5],int arr2[8])
//{
//	int c;
//	char unique[13];
//	c = 13;
//	for (int i = 0; i < 5; i++)
//	{
//		unique[i] = arr[i];
//		for (int j = 0; j < 8; j++)
//		{
//			if (unique[i] < arr2[j])
//			{
//				unique[i];
//		    }
//			else
//			{
//				unique[i] = arr2[j];
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arrA[5] = { 15,11,10,9,7 };
//	int arrB[8] = { 20,17,13,10,8,7,6,4 };
//
//	cout << endl;
//	return 0;
//}
#include <iostream>
using namespace std;

void Merge_array(int arrOne[], int arrTwo[], int sizeOne, int sizeTwo)
{

    int arrMerge[200];

    int i = 0;
    int j = 0;
    int k = 0;
    int temp[100];
    int o = 0;

    while (i < sizeOne && j < sizeTwo)
    {
        arrMerge[k] = arrOne[i];
        for (int f = 1; f < sizeOne; f++)
        {
            if (arrMerge[k] > arrOne[f])
            {
                temp[o] = arrMerge[k];
                arrMerge[k] = arrOne[f];
                arrMerge[++k] = temp[o];
            }
        }
    }

    //while (i < sizeOne) {

    //    arrMerge[k++] = arrOne[i++];

    //}

    //while (j < sizeTwo) {

    //    arrMerge[k++] = arrTwo[j++];

    //}

        /*if (arrOne[i] < arrTwo[j]) {

            arrMerge[k++] = arrOne[i++];

        }
        else {

            arrMerge[k++] = arrTwo[j++];

        }*/
    for (int c = 0; c < k; c++) {

        cout << arrMerge[c] << " ";

    }

}

int main()
{

    int arrOne[100], arrTwo[100], sizeOne, sizeTwo;

    cout << "Enter the size of first array \n";
    cin >> sizeOne;

    cout << "Enter the size of second array \n";
    cin >> sizeTwo;

    cout << "Enter values for first array \n";

    for (int i = 0; i < sizeOne; i++) {

        cin >> arrOne[i];

    }

    cout << "Enter values for second array \n";

    for (int j = 0; j < sizeTwo; j++) {

        cin >> arrTwo[j];

    }

    Merge_array(arrOne, arrTwo, sizeOne, sizeTwo);

    return 0;
}