/* File name lab test 1 sample
   Student name : Aldalton Choo Chien Khin
   completed on 5 P.M 25th of march 2018
*/
#include <stdio.h>
#include <math.h>

int main ()
{
    int m, H = 0,  N = 0;
    int max = 100;
    char student ;

    do
    {
    printf("please enter your mark:");
    scanf("%i", &m);


    if (m > max)
    {

    do
    {
    printf("please enter a valid input:");
    scanf("%i", &m);
    }while (m > max);

    }

    if (m < 50)
    {
        printf("your grade is N");
    N++;

    }

    else if (m < 60)
    {
        printf("your grade is P");
    }

    else if (m < 70)
    {
        printf("your grade is C");
    }

    else if (m < 80)
    {
        printf("your grade is D");
    }

    else if (m <= 100)
    {
        printf("your grade is H");
    H++;
    }


    printf("\nare you the last student?(y/n):");
    fflush(stdin);
    scanf("%c", &student);

    }while (student == 'N'|| student == 'n' && student!= 'Y'|| student!= 'y');

    if (N > H)
    {
        printf("\nPoor results");
    }
    else
    {
        printf("\nGood results");
    }
















return (0);
}
