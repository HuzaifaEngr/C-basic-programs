#include<stdio.h>
#include<conio.h>
int main()
{
    int per;
    printf("Enter Your Percentage of your Intermediate Marks :");
    scanf("%d", &per);
    
    if (per >= 80)
    {
        printf("You are eligible to BSSC Program !");
    }
    else if (per >= 70)
    {
        printf("You are eligible to BSCS Program !");
    }
    else if (per >= 60)
    {
        printf("You are eligible to BSIT Program !");
    }
    else 
    {
        printf("Your percentage is low !");
    }
    getch();
}