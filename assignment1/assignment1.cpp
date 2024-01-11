/*
#include <iostream>
using namespace std;

void Merge_array(int arrOne[], int arrTwo[], int sizeOne, int sizeTwo) 
{

    int arrMerge[200];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < sizeOne && j < sizeTwo) {

        if (arrOne[i] < arrTwo[j]) {

            arrMerge[k++] = arrOne[i++];

        }
        else {

            arrMerge[k++] = arrTwo[j++];

        }


    }

    while (i < sizeOne) {

        arrMerge[k++] = arrOne[i++];

    }

    while (j < sizeTwo) {

        arrMerge[k++] = arrTwo[j++];

    }

    for (int c = 0; c < k; c++) {

        cout << arrMerge[c] << " ";

    }

}

int main() {

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
}*/
/*
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    // using strcat//
    cout << "using strcat function " << endl;
    char srs1[50] = "i hope to get";
    char srs2[50] = " full marks in this assingment";

    strcat(srs1, srs2);

    cout << srs1;
    cout << endl;
    cout << endl;
    // using strncat//
    cout << "using strncat function " << endl;
    char srs3[50] = "how are you";
    char srs4[50] = "today";

    cout << "the content of source string is :" << srs3 << endl;
    cout << "the content of second string is :" << srs4 << endl;
    strncat(srs3, srs4, 3);
    cout << "the content of destination string is :" << srs3 << endl;
    cout << endl;

    // using stchr //
    /*char str[30] = "i love FAST university";
    char p[10] = "FAST";
    strchr(str, p);
    if (strchr(str[30], c) != NULL)
    {
        cout << c << " " << "is present in string" << endl;
    }
    else
    {
        cout << c << " " << "is not present in string" << endl;
    }*/
    // using strstr //
    /*
    cout << "using strstr function " << endl;
    char srs5[50] = "sir waqas has a teacher assistant";
    char srs6[50] = "has";
    cout << "the string is :" << srs5[50];
    cout << endl;
    char* p = strstr(srs5, srs6);

    if (p)
    {
        cout << "'" << srs6 << "' is present in " << srs5 << " at position " << p - srs5 << endl;
    }
    else
    {
        cout << srs6 << " is not present " << srs5 << endl;
    }
    cout << endl;

    // using strcmp //
    cout << "using strcmp function " << endl;
    char str2[40] = "Faisalabad";
    char str3[40] = "lahore";
    char Result = strcmp(str2, str3);
    cout << "comparing string " << str2 << "with string " << str3;
    cout << "the result is the dfference of =" << Result;
    cout << endl;
    cout << endl;

    // using strlen //
    cout << "use of strlen function" << endl;
    char str4[] = "what is the use of it";
    cout << "the lenght of string str4 is =" << strlen(str4);
    cout << endl;
    cout << endl;

    // using strtok //
    cout << "using strtok " << endl;
    char jfk[] = "ask not what your country can do for you ask what you can do for your country";
    char* tokken = strtok(jfk, " ");

    cout << "tokken 1 is =" << tokken << endl;
    cout << "tokken 2 is =" << tokken << endl;
    cout << "tokken 3 is =" << tokken << endl;
    cout << "tokken 4 is =" << tokken << endl;
    cout << "tokken 5 is =" << tokken << endl;

    return 0;
}*/