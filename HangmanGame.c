#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char kelimek[50];

    printf("Word : ");
    scanf("%s", kelimek);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
    

    int char_len = strlen(kelimek);
    char V_Str[char_len + 1];
    char kelime[char_len + 1];

    kelime[char_len] = '\0';

    int z = 0;
    while (z < char_len)
    {
        kelime[z] = toupper(kelimek[z]);
        z++;
    }

    V_Str[char_len] = '\0';

    int a = 0;
    while (a < char_len)
    {
        V_Str[a] = ' ';
        a++;
    }

    printf("%d\n\n", char_len);

    int i = 0;
    while (i < char_len)
    {
        printf("[ ]    ");
        i++;
    }

    char harf;

    int Health = 5;
    int zayn;
    int iz = 0;
    while (Health > 0 && kelime != V_Str)
    {
        if (strcmp(kelime, V_Str) == 0)
        {
            printf("\n\ncongratulations you find word.");
            break;
        }
        i = 0;
        printf("\nLetter : ");
        scanf(" %c",&harf);
        zayn = 0;
        char harfb = toupper(harf);
        if (harfb == 'X')
        {
            break;  
        }
        while (i < char_len)
        {
            if (kelime[i] == harfb)
            {
                if (kelime[i] == V_Str[i])
                {
                    zayn = 1;
                }
                else if (kelime[i] != V_Str[i])
                {
                    V_Str[i] = kelime[i];
                    zayn = 1;
                }
            }
            
            else if (kelime[i] != harfb && zayn != 1 && i == char_len-1)
            {
                
                printf("\nThere is no such letter in the word.\n");
                Health = Health - 1; 
            } 
            i++; 
        }
        if (Health == 0)
        {
            printf("You have no health.");
            break;
        }
        
        printf("Health : %d\n", Health);
        iz = 0;
        while (iz < char_len)
        {
            printf("[%c]    ",V_Str[iz]);
            iz++;
        }
        

    }

    getch();
}