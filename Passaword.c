#include <windows.h>
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(0));

    char sifre[11];
    int i = 0;
    while (i < 10)
    {
        int random = 21 + rand()%125;
        sifre[i] = (char)random;
        i++;
    }
    
    printf("Random Passaword : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", sifre[i]);
        Sleep(150);
    }
    
    
    
    
}