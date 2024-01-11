//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int findSubString(char arr[], char sub[], int index)
//{
//    int arrLen = strlen(arr);
//    int subLen = strlen(sub);
//
//    if (index < 0 || index >= arrLen || subLen > arrLen) {
//        return -1;
//    }
//
//    for (int i = index; i <= arrLen - subLen; i++) {
//        int j;
//        for (j = 0; j < subLen; j++)
//        {
//            if (arr[i + j] != sub[j]) break;
//        }
//
//        if (j == subLen) return i;
//    }
//
//    return -1;
//}
//
//
//void removeDuplicateWords(char arr[])
//{
//    char temp[100];
//    int j = 0;
//
//    for (int i = 0; i < strlen(arr); i++)
//    {
//        if (arr[i] == ' ' || arr[i] == '\0')
//        {
//            temp[j] = ' ';
//            temp[j + 1] = '\0';
//
//            int wordLen = strlen(temp);
//
//            int sub = findSubString(arr, temp, i);
//            while (sub != -1)
//            {
//                if (sub != -1)
//                {
//
//                    for (int j = 0; j < wordLen; j++)
//                    {
//                        for (int k = sub; k < strlen(arr) - 1; k++)
//                        {
//                            swap(arr[k], arr[k + 1]);
//                        }
//                    }
//
//                    arr[strlen(arr) - wordLen] = '\0';
//                }
//
//                sub = findSubString(arr, temp, i);
//            }
//
//            j = 0;
//        }
//        else
//        {
//            temp[j] = arr[i];
//            j++;
//        }
//    }
//
//    int lastWordLen = strlen(temp);
//
//    int sub = findSubString(arr, temp, 0);
//    if (sub != -1)
//    {
//        for (int j = 0; j < lastWordLen; j++)
//        {
//            for (int k = sub; k < strlen(arr) - 1; k++)
//            {
//                swap(arr[k], arr[k + 1]);
//            }
//        }
//
//        arr[strlen(arr) - lastWordLen] = '\0';
//    }
//}
//
//
//int main()
//{
//    char arr[] = "This is is an an an example string string";
//    cout << "Original string:" << arr << endl;
//    removeDuplicateWords(arr);
//    cout << "New string:\t" << arr << endl;
//    cout << "Enter the substring you want to find:";
//        char sub[20];
//        cin.getline(sub, 20);
//        cout << "tell the index you want to find:";
//        int i = 0;
//        cin >> i;
//        int c = findSubString(arr,sub,i);
//        if (c == -1)
//        {
//            cout << "Substring not found." << endl;
//        }
//        else
//        {
//            cout << "substring found at " << c << " ." << endl;
//        }
//
//    system("pause");
//    return 0;
//}
