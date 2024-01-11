//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//void generateRandomNumbers(const string& filename) {
//    ofstream myFile(filename);
//    for (int i = 0; i < 50; i++) {
//        int randomNumber = rand() % 100;
//        myFile << randomNumber << " ";
//    }
//    myFile.close();
//    cout << "Random numbers have been written to " << filename << endl;
//}
//void removeDuplicates(const string& inputFile, const string& myFile) {
//    ifstream input(inputFile);
//    ofstream output(myFile);
//    const int maxNumbers = 50;
//    int numbers[maxNumbers];
//    int count = 0;
//
//    int number;
//    while (input >> number && count < maxNumbers) {
//        numbers[count++] = number;
//    }
//    input.close();
//    for (int i = 0; i < count; i++) {
//        for (int j = i + 1; j < count; j++) {
//            if (numbers[i] == numbers[j]) {
//                numbers[j] = numbers[--count];
//                j--;
//            }
//        }
//    }
//    for (int i = 0; i < count - 1; i++) {
//        for (int j = 0; j < count - i - 1; j++) {
//            if (numbers[j] > numbers[j + 1]) {
//                int temp = numbers[j];
//                numbers[j] = numbers[j + 1];
//                numbers[j + 1] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < count; i++) {
//        output << numbers[i] << " ";
//    }
//
//    output.close();
//    cout << "Duplicates have been removed and sorted numbers have been written to " << myFile << endl;
//}
//
//int main() {
//    const string randomFile = "Random.txt";
//    const string sortedFile = "Sorted.txt";
//
//    generateRandomNumbers(randomFile);
//    removeDuplicates(randomFile, sortedFile);
//
//    return 0;
//}