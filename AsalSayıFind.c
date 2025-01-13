#include <stdio.h>

int main()
{
    int number;
    float kalan;
    int a;
    printf("Bir Sayi Giriniz : ");
    scanf("%d",&number);
    int i = number-1;

    for (i = number-1; i > 1; i--)
    {
        kalan = number%i;

        if (i == 2 && kalan != 0)
        {
            a = 1;
            printf("%d Bir Asal Sayidir.", number);
            break;
        }
        
        
    }
    
    if (a != 1)
    {
        printf("%d Bir Asal Sayi Degildir.", number);
    }
    
    
    
    
    
    
    

}