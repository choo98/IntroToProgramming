#include <stdio.h>

int main()
{
    int lol,i = 0,j = 0, sid, x = 0, y = 0,pin;


    do
    {

        printf("please enter number:");
        scanf("%i",&sid);

         while(sid != 0)
        {
            sid /= 10;
            y++;
        }

        if(y == 5);
        {
            printf("valid input");
        }

    }while(y == 5);






}
