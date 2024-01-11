#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;
int main() {
    //PlaySound(TEXT("mywavsound.wav"), NULL, SND_FILENAME); - My erroring code
    PlaySound(TEXT("hello"), NULL, SND_FILENAME | SND_ASYNC);// - the correct code

    int test = 0;
    cin >> test;
    return 0;
}