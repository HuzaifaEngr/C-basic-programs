#include<stdio.h>
#include<conio.h>
void main()
{
    //this program display the factorisation
    long n , q , d = 2, r[10], f, g;
    printf("Enter a number :");
    scanf("%d", &n);
    for(long i = 0;i <= n; i++)
    {
        for(long j = 1; n % d != 0; j++)
        {
            d++;
        }

        printf("%d\t|\t%d \n", d, n);
        q = n / d;
        n = q;
    }
    getch();
}