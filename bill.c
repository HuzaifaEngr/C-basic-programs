#include<stdio.h>
#include<conio.h>
int main()
{
    int BA, NCU, UP;
    char U;
    printf("\n If you are Home User Enter 'h', \n If you are Commercial User Enter 'c' :");
    scanf("%c", &U);  
    if( U == 'h' || U == 'c')
    {
        printf("\n Enter the Number of consumed Units: ");
        scanf("%d", &NCU);

        if (NCU <= 200 )    
        {
            if (U == 'h')
            {
                UP = 12;
            }
            else if (U == 'c')
            {
                UP = 15;
            }
        }
        else if (NCU > 200 && NCU <= 400)
        {
            if (U == 'h')
            {
               UP = 15;
            }
            else if (U == 'c')
            {
               UP = 20;
            }
        }
        else
        {
            if (U == 'h')
            {
               UP = 20;
            }
            else if (U == 'c')
            {
                UP = 24;
            } 
        }
        BA = NCU * UP;
        printf("\n Your electricity bill is :%d", BA);
    }
    else
    {
        printf("\nInvalid Configuration!\nPlease Re-Enter\n");
    }
    getch();
}