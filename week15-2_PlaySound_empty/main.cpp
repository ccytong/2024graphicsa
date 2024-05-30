///先把程式碼全刪
#include <windows.h>
#include <stdio.h>
int main()
{
    ///PlaySound("C:/Do.wav",NULL,SND_ASYNC);
    PlaySound("mykbeat.wav", NULL, SND_ASYNC);
    printf("請輸入一個整數: ");
    int n;
    scanf("%d", &n);
}
