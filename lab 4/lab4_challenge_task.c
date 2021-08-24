#include <stdio.h>

#include <stdio.h>
int main()
{
    int i, term, term1 = 0, term2 = 1, nextTerm = 0, x;

    printf("Please enter the number of terms: ");
    scanf("%i", &term);


     printf("\n\nAmong the first %i terms of Fibonacci series that are also prime numbers:", term);

    for (i = 1; i <= term; ++i)
    {
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;

        if ( i == 4)
        {
            printf("\n%i", nextTerm);
        }

        x = nextTerm % 2;

        if (x == 1 && nextTerm > 2){
            printf("\n%i", nextTerm);

        }


    }
    return 0;
}



