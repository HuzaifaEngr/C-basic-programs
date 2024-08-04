#include<stdio.h>
#include<conio.h>
int main()
{
    char a = ' ';
    printf("ASCII_TABLE!\n");
    printf("=============\n");
    printf("DEC.\tCHAR.\n");
    printf("=============\n");
    printf("32.\tSP\n");
    for(long i = 33; i <= 126; i++)
    {
        a++;
        printf("%d.\t%c \n", i, a);
    }
    printf("127.\tDEL\n");
    getch();
}