#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;
int main() {
    PlaySound(TEXT("hello.wav"), NULL, SND_FILENAME | SND_ASYNC);

    int test = 0;
    cin >> test;
    return 0;
}