#include <stdio.h>

int main()
{
    int num,x=0,y=0,b=0;

    printf("please enter a number:");
    scanf("%i",&num);

    if(num == 1)
    {
        x = 3;
    }
    else if(num == 2)
    {
        x = 6 ;
    }
    else
    {
       x = 9;
    }

    b = b + x;
    y = y + 10;

    printf("%i\n",num);
    printf("y = %i",y);
    printf("\nb = %i",b);

}
