#include<stdio.h>
#include<conio.h>
void main()
{
    char n = 'A';
    for (int i = 1;i <= 10;i++)
    {
        for(int y = 1;y <= i;y++)
        {
            n++;
            printf("%c", n);
        }
        printf("\n");
    }
    getch();
}