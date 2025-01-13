#include <stdio.h>

int main()
{
    int number;
    float kalan;
    int a;
    printf("Number : ");
    scanf("%d",&number);
    int i = number-1;

    for (i = number-1; i > 1; i--)
    {
        kalan = number%i;

        if (i == 2 && kalan != 0)
        {
            a = 1;
            printf("%d This is prime number.", number);
            break;
        }
        
        
    }
    
    if (a != 1)
    {
        printf("%d This not a prime number.", number);
    }
    
    
    
    
    
    
    

}