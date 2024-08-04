#include <stdio.h>
#include <conio.h>
int main()
{
    int GS,BI,SI,BS;
    int B = 0;
    printf("\n Enter your Basic Salary :");
    scanf("%d", &BS);
    printf("\n  Enter the Sold Item Item : ");
    scanf("%d", &SI);
    printf("\n Enter the Broken Item :  ");
    scanf("%d", &BI);

    if (BI == 0 && SI >= 100)
    {
        B = 10000;
    }

    GS = BS + (SI * 8) + B ;
    printf("\n Your Gross Salary is :%d", GS);
    getch();
}