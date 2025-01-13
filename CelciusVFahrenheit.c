#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>

int main()
{
    float C, F, derece;

    char s[20];
    

    printf("Fahrenheit or Celcius(f/c) : ");
    scanf("%s",s);

    printf("%s",s);

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nKac Derece : ");
    scanf("%f",&derece);

    if (strcmp(s,"c") == 0)
    {
        C = derece;
        F = (C * 1.8) + 32;
        printf("\n\n\n\n%.1f Degree Celcius equal %.1f degree Fahrenheit.", C , F);
    }
    else
    {
        F = derece;
        C = (F - 32)/1.8;
        printf("\n\n\n\n%.1f Degree Fahrenheit equal %.1f Degree Celcius.", F , C);
    }
    
}