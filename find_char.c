#include <stdio.h>
#include <string.h>

#define SIZE 0x10

int main()
{
    char str[SIZE];
    int ch;
    char *p;

    printf("bir isim giriniz ");
    sgets(str);
    printf("aranacak karakteri girin: ");
    ch = getchar();

    p = strchr(str, ch);

    if (p != NULL)
    {
        printf("bulundu... yazinin %d indisli karakteri\n", p - str);
        *p = '!';
        puts(str);
    }

    else
    {
        printf("bulunamadi\n");
    }
}