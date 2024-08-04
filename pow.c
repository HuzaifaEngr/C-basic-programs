#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a, b, r; 
    printf("Enter the value of a,b :");
    scanf("%d %d", &a, &b);
    r = powf(a,b);
    printf("Result :%d",r);
    getch();
}