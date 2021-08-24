#include<stdio.h>

int main()
{
    int myArray[10],x,y,swap=0;

    for(x=0;x<10;x++)
    {
        printf("please enter an integer for array %i:",x+1);
        scanf("%i",&myArray[x]);
    }

    for(x=0;x<10;x++)
    printf("\nthe integers you've entered = %i",myArray[x]);

    for(x=0;x<10;x++)
    {
        for(y=x+1;y<10;y++)
            {
                if (myArray[x] > myArray[y])
                {
                    swap = myArray[x];
                    myArray[x] = myArray[y];
                    myArray[y] = swap;
                }
            }
    }

    printf("\n\nthe integers you've entered in ascending order:\n");
    for(x=0;x<10;x++)
        printf("%i\n", myArray[x]);
}
