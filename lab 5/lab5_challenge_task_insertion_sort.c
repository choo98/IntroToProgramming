#include<stdio.h>

int main()
{
    int myArray[10],x,y,temp=0;

    for(x=0;x<10;x++)
    {
        printf("please enter an integer for array %i:",x+1);
        scanf("%i",&myArray[x]);
    }

    for(x=0;x<10;x++)
    printf("the integers you entered = %i\n",myArray[x]);

    for(x=0;x<10;x++)
    {
        temp = myArray[x];
        y = x-1;

        while(y >= 0 && myArray[y] > temp)
        {
            myArray[y+1] = myArray[y];
            y = y-1;
        }
        myArray[y+1] = temp;
    }

    for(x=0;x<10;x++)
        printf("\nthe integers in ascending order=%i", myArray[x]);
}
