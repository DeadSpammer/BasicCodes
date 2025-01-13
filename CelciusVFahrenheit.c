#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>

int main()
{
    float C, F, derece;

    char s[20];
    

    printf("Fahrenheit veya Celcius Hangisi : ");
    scanf("%s",s);

    printf("%s",s);

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nKac Derece : ");
    scanf("%f",&derece);

    if (strcmp(s,"celcius") == 0)
    {
        C = derece;
        F = (C * 1.8) + 32;
        printf("\n\n\n\n%.1f Derece Celcius %.1f Derece Fahrenheit'a Esittir.", C , F);
    }
    else
    {
        F = derece;
        C = (F - 32)/1.8;
        printf("\n\n\n\n%.1f Derece Fahrenheit %.1f Derece Celcius'a Esittir.", F , C);
    }
    
}