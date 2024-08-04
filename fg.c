#include<stdio.h>
#include<conio.h>
int main()
{  
    double n, mul;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i = 1;i <= 10;i++)
    {
        mul = n * i;
        printf("%d x %d\t= %d \n", n, i, mul);
    }
    getch();
}
