#include<stdio.h>
#include<conio.h>
void main()
{
    char a = '!';
    for (int i = 1; i <= 127; i++)
    {
        a++;
        printf("%c", a);
    }
    getch();
}