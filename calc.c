#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, z;
    int result = 0;
    printf("\n Enter the first number :");
    scanf("%d", &x);
    printf("\n Enter the second number :");
    scanf("%d",&y);
    printf("\n For Addition Enter 1 \n For Subtraction Enter 2\n For Multiplication Enter 3 \n For Division Enter 4");
    printf("\n Choose the operation :");
    scanf("%d", &z);

    if (z == 1)
    {
        result = x + y;
    }
    else if (z == 2)
    {
        result = x - y;
    }
    else if (z == 3)
    {
        result = x * y;
    }
    else if (z = 4)
    {
        result = x / y;
    }
    else 
    {
        printf("Incorrect number !");
    }
    printf("Result = %d", result);
    
    getch();
}