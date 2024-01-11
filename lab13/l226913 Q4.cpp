//#include <iostream>
//using namespace std;
//void bitwise(const int arr1[], const int arr2[], int resultAND[], int resultOR[], int resultXOR[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        resultAND[i] = arr1[i] & arr2[i + 1];
//        resultOR[i] = arr1[i] | arr2[i + 1];
//        resultXOR[i] = arr1[i] ^ arr2[i + 1];
//    }
//}
//int main() {
//    const int size = 5;
//    int arr1[size];
//    int arr2[size];
//    cout << "enter the first array." << endl;
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "element " << i << " :";
//        cin >> arr1[i];
//        cout << endl;
//    }
//    cout << "enter the second array." << endl;
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "element " << i << " :";
//        cin >> arr2[i];
//        cout << endl;
//    }
//    int resultAND[size - 1];
//    int resultOR[size - 1];
//    int resultXOR[size - 1];
//    bitwise(arr1, arr2, resultAND, resultOR, resultXOR, size);
//    cout << "Bitwise AND: ";
//    for (int i = 0; i < size - 1; i++) {
//        cout << resultAND[i] << " ";
//    }
//    cout << std::endl;
//    cout << "Bitwise OR: ";
//    for (int i = 0; i < size - 1; i++) {
//       cout << resultOR[i] << " ";
//    }
//    cout << std::endl;
//    cout << "Bitwise XOR: ";
//    for (int i = 0; i < size - 1; i++) {
//        cout << resultXOR[i] << " ";
//    }
//    cout << std::endl;
//
//    return 0;
//}