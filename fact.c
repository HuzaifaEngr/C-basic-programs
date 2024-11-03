#include<stdio.h>
#include<conio.h>
void main()
{
    //this program display the factorization
    long n , d = 2;
    printf("Enter a number :");
    scanf("%ld", &n);
    while(n > 1)
    {
        while(n % d != 0)
        {
            d++;
        }

        printf("%ld\t|\t%ld \n", d, n);
        n /= d;
    }
    getch();
}