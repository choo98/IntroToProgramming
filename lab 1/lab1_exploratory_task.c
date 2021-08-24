#include <stdio.h>
// this program swaps 2 numbers

int main()
{
    int i = 0,j = 0;

    printf("please enter 2 different integers for i and j:");
    scanf("%i %i", &i, &j);

    printf("You have entered %i for i, %i for j", i, j);

    i = i + j;
    j = i - j;
    i = i - j;

    printf("\nAfter swapping %i = i, %i = j", i, j);

}
