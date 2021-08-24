#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int x = 0,y = 0,z,iv = 0,pw = 0,count = 0,is = 0,ps = 0,li = 0,pl = 0,turn = 0;
    long long num,num2,num3,num4,sid,pin,sil,spw;


    do{
        printf("please enter your student id:");
        scanf("%lld",&sid);
        num = sid;


        while(sid != 0)
        {
            sid /= 10;
            count++;
        }

        if (count > 6 && count < 9)
        {
            is = (int)num;

            iv = 1;
        }
        else
        {
            printf("\nInvalid sign-up: Student ID should be in 7 or 8 digits, try again");
            getch();
            system("cls");
        }

        printf("register successfully");

    }while(iv == 0);


    do{
        printf("\n\nPlease register your password:");
        scanf("%lld",&pin);
        count = 0;
        num2 = pin;

        while(pin!= 0)
        {

            pin /= 10;
            count++;
        }

        if (count == 6)
        {
            ps = (int) num2;
            pw = 1;
            printf("password register successfully");
        }
        else
        {
            printf("\nInvalid password Please enter a 6-digit pin");
            getch();
            system("cls");
        }



        }while(pw == 0);

    do{
        count = 0;
        printf("\n\nLogin");
        printf("\nEnter your student ID: ");
        scanf("%lld", &sil);
        num3 = sil;

        while(sil != 0)
        {
            // n = n/10
            sil /= 10;
            count++;
        }


        if (count > 6 && count < 9)
        {
            li = (int) num3;
            if (li == sid)
            {

                li = 1;
            }
            printf("\n\nLogin successfully");

        }
        else
        {
            printf("\nLogin error: The Student ID should be in 7 or 8 digits, please try again.");
            getch();
            system("cls");
        }

    }while(li == 0);

    do {

        printf("\nEnter your student ID: %i", sid);
        printf("\nEnter your password: ");
        scanf("%lld", &spw);
        count = 0;
        num4 = spw;
        while(spw != 0)
        {

            spw /= 10;
            count++;
        }

        if (count == 6){
            pl = num4;
            if(pl == ps){
                printf("Successfully logged in.");
                getch();
                exit(0);

            }
            else{
                printf("Wrong password. Please try again!");
                getch();
                turn++;
                pw = 0;
            }
        }
        else{
            printf("\nLogin error: Please enter a 6-digit pin");
            getch();
            turn++;
            system("cls");
        }

        if (turn > 4){
            printf("\n\nAccess denied!\n\n");

            pw = 1;
        }
        else{
            pw = 0;
        }
    }while(pw == 0);








}

