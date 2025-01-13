#include <windows.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>



void Progress_Bar()
{
    int length = 10;
    int i = 0;
    while (i <= length)
    {
        int i_n = length - i;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("Lutfen Bekleyiniz...\n");
        printf("[%.*s", i, "||||||||||||||||");
        printf("%.*s]", i_n, "                   ");
        sleep(1);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        i++;
    }
    

}

int main()
{
    Progress_Bar();
}