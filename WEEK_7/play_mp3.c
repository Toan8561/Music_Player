#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>

#pragma comment(lib, "WinMM.Lib")

int main() {
    printf("Play song!");
    //PlaySound(TEXT("test.mp3"), NULL, SND_ASYNC | SND_APPLICATION);
    PlaySound(TEXT("test.wav"), NULL, SND_ASYNC);
    //system("pause");
    Sleep(30000);
    return 0;
}