#include <stdio.h>
#include <conio.h>

int main()
{
    float x, y, per;
    printf("\n Enter your obtained marks :");
    scanf("%f", &x);
    printf("\n Enter the total marks :");
    scanf("%f", &y);
    per = (x / y) * 100;
    printf("\n Your Percentage is :%f", per);

    if (per >= 90)
    {
        printf("\n \t Grade = A+");
        printf("\n Status   : Excellent!");
    }
    else if (per >= 80)
    {
        printf("\n \t Grade = A");
        printf("\n Status   : Good!");
    }
    else if (per >= 70)
    {
        printf("\n \t Grade = B");
        printf("\n Status   : Average!");
    }
    else if (per >= 60)
    {
        printf("\n \t Grade = C");
        printf("\n Status   : Average!");
    }
    else if (per >= 50)
    {
        printf("\n \t Grade = D");
        printf("\n Status   : Average!");
    }
    else if (per >= 40)
    {
        printf("\n \t Grade = E");
        printf("\n Status   : Average!");
    }
    else
    {
        printf("\n \t Grade = F");
        printf("\n Status   :Fail!");
    }
    getch();
}
