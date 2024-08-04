#include <stdio.h>
#include <conio.h>
#include <math.h>

int add(long x, long y)// addition 
{
    long result;
    result = x + y;
    return result;
}

int sub(long x, long y)// subtraction
{
    long result;
    result = x - y;
    return result;
}

int mul(long x, long y)// multiplication 
{
    long result;
    result = x * y;
    return result;
}

int div(long x, long y)// division
{
    long result;
    result = x / y;
    return result;
}
int power(long x , long y)// power
{
    long result;
    result = pow(x , y);
    return result;
}
int table(long x)
{
    long mul;
    for (int i = 1; i <= 10; i++)
    {
        mul = x * i;
        printf(" %d x %d\t= %d\n", x, i, mul);
    } 
}
int fac(long x)
{
    long q, d = 2;
    for (int i = 1; i <= x;i++)
    {
        for (int j = 1; x % d != 0; j++)
        {
            d++;
        }

        printf(" %d\t|\t%d\n", d, x);
        q = x / d;
        x = q;
    }
}

int main()
{
    long n1, n2;
    char oper;
    printf(" '+' for addition \n '-' for subtraction \n '*' for multiplication\n '/' for division \n 'p' for power \n 't' for table \n 'f' for factorization \n 'a' for print ASCII Table ");
    printf("\n Enter the operation :");
    scanf("%c",&oper);
    if(oper == '+' || oper == '-' || oper == '*' || oper == '/' )
    {
        printf("\n Enter the first value :");
        scanf("%d",&n1);
        printf("\n Enter the second value :");
        scanf("%d",&n2);
    }
    else if(oper == 'p')
    {
        printf("\nRemember base can only contains Numbers");
        printf("\nEnter the base :");
        scanf("%d", &n1);
        printf("\nEnter the power :");
        scanf("%d", &n2);
    }
    else if (oper == 't' || oper == 'f')
    {
        printf(" Enter a number :");
        scanf("%d", &n1);
    }
    
    if(oper == '+')
    {
        add(n1, n2);
        printf("\n Result : %d", add(n1, n2));
    }
    else if(oper == '-')
    {
        sub(n1, n2);
        printf("\n Result : %d", sub(n1, n2));
    }
    else if(oper == '*')
    {
        mul(n1, n2);
        printf("\n Result : %d", mul(n1, n2));
    }
    else if(oper == '/')
    {
        div(n1, n2);
        printf("\n Result : %d", div(n1, n2));
    }
    else if (oper == 'p')
    {
        power(n1, n2);
        printf("\n Result :%d", power(n1, n2));
    } 
    else if (oper == 't')
    {
        table(n1);
    }
    else if (oper == 'f')
    {
        fac(n1);
    }
    else if (oper == 'a')
    {
        char a = ' ';
        printf(" =============\n");
        printf(" DEC.\tCHAR.\n");
        printf(" =============\n");

        printf(" 32.\tSP\n");
        for (int i = 33; i <= 126; i++)
        {
            a++;
            printf(" %d.\t%c\n", i, a);
        }
        printf(" 127.\tDEL\n");
    }
    else
    {
        printf("\n Invalid configuration !\n Please Re-Enter ");
    }
    getch();
}