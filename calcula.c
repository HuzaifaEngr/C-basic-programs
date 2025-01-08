#include <stdio.h>
#include <conio.h>
#include <math.h>

long add(long x, long y) { return x + y; }          // Addition
long sub(long x, long y) { return x - y; }          // Subtraction
long mul(long x, long y) { return x * y; }          // Multiplication
long div(long x, long y) { return y != 0 ? x / y : 0; } // Division with zero check

long power(long x, long y) {
    return pow(x, y);                              // Power
}

long factorial(long x) {
    long f = 1;
    for(long I = 1;I <= x;I++) {
        f = f * I;
    }
    return f;
}

void table(long x) {
    for (long i = 1; i <= 10; i++) {
        printf(" %ld x %d = %ld\n", x, i, x * i);
    }
}

void fac(long x) {
    long q, d = 2;
    while (x > 1) {
        while (x % d != 0) {
            d++;
        }
        printf(" %ld\t|\t%ld\n", d, x);
        x /= d;
    }
}

int main() {
    long n1, n2;
    char oper;
    printf(" '+' for addition \n '-' for subtraction \n '*' for multiplication\n '/' for division \n 'p' for power \n 't' for table \n 'f' for factorization \n 'a' for ASCII Table \n 'c' for factorial");
    printf("\n Enter the operation: ");
    scanf(" %c", &oper);

    if (oper == '+' || oper == '-' || oper == '*' || oper == '/') {
        printf("\n Enter the first value: ");
        scanf("%ld", &n1);
        printf(" Enter the second value: ");
        scanf("%ld", &n2);
    } else if (oper == 'p') {
        printf("\nEnter the base: ");
        scanf("%ld", &n1);
        printf("Enter the power: ");
        scanf("%ld", &n2);
    } else if (oper == 't' || oper == 'f' || oper == 'c') {
        printf(" Enter a number: ");
        scanf("%ld", &n1);
    } 

    switch (oper) {
        case '+': printf("\n Result: %ld", add(n1, n2)); break;
        case '-': printf("\n Result: %ld", sub(n1, n2)); break;
        case '*': printf("\n Result: %ld", mul(n1, n2)); break;
        case '/':
            if (n2 != 0)
                printf("\n Result: %ld", div(n1, n2));
            else
                printf("\n Division by zero is not allowed.");
            break;
        case 'p': printf("\n Result: %ld", power(n1, n2)); break;
        case 't': table(n1); break;
        case 'f': fac(n1); break;
        case 'a':
            printf(" =============\n DEC.\tCHAR.\n =============\n");
            printf(" 32.\tSP\n");
            for (int i = 33; i <= 126; i++) {
                printf(" %ld.\t%c\n", i, i);
            }
            printf(" 127.\tDEL\n");
            break;
        case 'c':
            if (n1 < 0) {
                printf("factorial of negative number is not defined \n");
            } else {
                printf("factorial of %ld is %ld \n", n1, factorial(n1));
            }
            break;
        default: printf("\n Invalid operation! Please Re-Enter.");
    }
    getch();
    return 0;
}