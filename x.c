#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d", &year);

    if (year %4 == 0)
    {
        printf("It is Leap Year!");
    }
    else
    {
        printf("It is not a Leap Year!");
    }
    getch();
}