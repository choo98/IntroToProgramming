/*  Student name = Aldalton Choo Chien Khin
    Student ID = 101212783
    program name = MTP_Aldalton
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct record // used to store user's info
{
    char name[50];
    int score;
};

struct game
{
    char    symbol[10][10];
    int     numz[10][10];
};

char *player_input(char name[50]) // prompt users to enter their info before playing
{
    system("cls");
    printf("*-*-*-*-*-*-* Welcome to MTP *-*-*-*-*-*-*");
    printf("\nplease enter your name for record purposes:");
    gets(name);
}

void player_info(struct record*player) // stores user's info
{
    char name[50];
    player_input(name);
    strcpy(player->name, name);
}

int main_menu() // generates the main menu
{
    int lul, choice, valid = 0;
    char error[50];

    do
    {
        system("cls");
        printf("*-*-*-*-*-*-* Welcome to MTP *-*-*-*-*-*-*\n");
        printf("1. Play game\n");
        printf("2. Scores\n");
        printf("3. How to play\n");
        printf("4. Quit\n");
        printf("\nPlease select a number (1,2,3,4):");

        fgets(error, 100, stdin);
        lul = sscanf(error, "%i", &choice);

        if (lul == 1)
            {
                if (choice == 1)
                {
                    return choice;
                    break;
                }
                else if (choice == 2)
                {
                    return choice;
                    break;
                }
                else if (choice == 3)
                {
                    return choice;
                    break;
                }
                else if (choice == 4)
                {
                    system("cls");
                    printf("*-*-*-*-*-*-* Welcome to MTP *-*-*-*-*-*-*\n");
                    printf("\nThank you for playing! See you next time!\n");
                    exit(0);
                }
                else if (choice == 0 || choice > 4);
                {
                    printf("Invalid input try again");
                    getch();
                    main_menu();
                }
            }
            else
            {
               printf("Invalid input try again");
               getchar();
            }
        }
        while (valid == 0);
}

void initialize(int lol[8][8])  /* this function builds generates random numbers for the board */
{
    int     x = 0,y = 0,i=0,j=8;
    int     random;

    srand((unsigned)time(NULL));

    for(x=0;x<8;x++)
    {


            for(y=0;y<8;y++)
            {
                random=rand()%10;
                lol[x][y]=random;

            }
    }
}

void startgame(int    lol[8][8],int i,int j) /* this function builds up the board  */
{
    int     x = 0,y = 0,quit=0;
    int     random;

    for(x=0;x<8;x++)
    {

            printf("\n");

            for(y=0;y<8;y++)
            {

                printf("|");
                printf("   %i   |",lol[x][y]);
            }

        printf("\n");

        for(y=0;y<8;y++)
        if(i == x  && j == y)
        {
            printf("    _   ");
        }
        else
        {
            printf("         ");
        }

    }


}

char command(char command)  /* this function ask the user to enter an input */
{
    char x;
    int getch();

    printf("\n\nplease enter a command ('D' or 'd'-Move right or 's' or 'S'-Move down or e to return to main menu)");
    command = getch();

    return command;

}

int midgame(char command,int lol[8][8],int *i, int *j) // moves the underscore on the game board
{
    int     x = 0,y = 0;
    int     valid;
    int     random;

    if(command == 'S' || command =='s')
    {
        *i = *i +1;

        valid = 1;

        if(*i > 7)
        {
            *i = 7;
            valid = 0;
        }

    }
    else if(command == 'D' || command == 'd')
    {
        *j = *j +1;

        valid = 1;

        if(*j > 7)
        {
            *j = 7;
            valid = 0;
        }
    }
    else
    {
        valid = 0;
    }
    return valid;



}

void calculate(int lol[8][8],int x,int y, int *total,int valid) // adds up to the total number of attractions each time user visits a tourist spot
{
    int i = 0,j = 0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if( i == x && j == y && valid == 1)
            {


                *total = *total + lol[i][j];

                printf("\n\n\nTotal score is:%i", *total);

            }
            else if(i == x && j == y && valid == 0 )
            {
                printf("\n\n\nTotal score is:%i", *total);
            }

        }
    }

}

int endgame(int lol[8][8],int x, int y,int *total,struct record *player) // Shows the user their total score at the end game
{
    int i = 0,j = 0,quit = 0;

            if( x == 7 && y == 7)
            {
                *total = *total + lol[7][7];
                printf("\n\nCongratulations your total score is:%i\n",*total);
                system("pause");
                quit = 1;
                system("cls");

            }
            player -> score = *total;

            return quit;




}

void savefile(int lol[8][8],struct record *player) // stores the user scores and info to and external file
{
    int score;
    char name[50];
	FILE * ptr;

    struct record playerAlias;
    playerAlias = *player;
    strcpy(name, playerAlias.name);
    score = playerAlias.score;

    ptr = fopen("score.txt","a");

    if(ptr == NULL)
    {
        printf("File missing\n");
        exit(1);
    }

    fprintf(ptr,"%s   %i\n", name, score);
    fclose(ptr);


}

int viewfile(struct record *player) // shows the user the scores when they click the score tab
{
    int c;
    FILE *file;
    file = fopen("Score.txt","r");

    if(file == NULL)
    {
        printf("\n File not found");
        return 1;
    }

    if (file)
    {
        system("cls");
        printf("*-*-*-*-*-*-* Welcome to MTP *-*-*-*-*-*-*\n");
        printf("\n*-*-*-*-*-*-*SCORE*-*-*-*-*-*-*\n\n");
        while ((c = getc(file)) != EOF)
        {
            putchar(c);
        }
        printf("\n\n");

        fclose(file);
    }

}

int instructions() // prints out the instructions
{
    int i;

    FILE * file;
    file = fopen("instructions.txt","r");

    if (file == NULL)
    {
        printf("\n File cannot be found");
        return 1;
    }

    if(file)
    {
        system("cls");
        while ((i = getc(file)) != EOF)
        {
            putchar(i);
        }
        printf("\n\n");

        fclose(file);

    }
}


int main()
{
    int     x,y,i=0,j=0;
    int     lol[8][8];
    int     random, total = 0, XD, quit = 0, mainmenu_selection;
    char    cmd;
    char    name[50];
    int     valid=1;
	int     score;
	struct  record *player;
    struct record playerAlias;
    playerAlias = *player;






    mainmenu_selection = main_menu();

    if (mainmenu_selection == 1)
    {

    player_info(&playerAlias);
    system("cls");
    initialize(lol);
    printf("*-*-*-*-*-*-* Welcome to MTP *-*-*-*-*-*-*\n");
    startgame(lol, i, j);
    total = 0;

    do{

        calculate(lol,i,j, &total, valid);
        printf("\n\nin order to win visit as many attractions as you can");
        cmd = command(cmd);
        system("cls");
        fflush(stdin);


        if( cmd == 'e')
        {
            main();
        }
        else
        {
            valid = midgame(cmd,lol,&i,&j);
            printf("*-*-*-*-*-*-* Welcome to MTP *-*-*-*-*-*-*\n");
            startgame(lol, i, j);
            quit = endgame(lol,i,j,&total,&playerAlias);
        }

    }while (quit == 0);

    system("cls");

    printf("------ Press enter to go back to menu ------");
    getch();
    main();

    system("cls");

    savefile(lol,&playerAlias);

    printf("*-*-*-*-*-*-* Welcome to MTP *-*-*-*-*-*-*\n");
    printf("\n\nThanks for playing!");

    }

    else if(mainmenu_selection == 2)
    {
        viewfile(&playerAlias);
        printf("------ Press enter to go back to menu ------");
        getch();
        main();
    }

    else if(mainmenu_selection == 3)
    {
        instructions();
        printf("------ Press enter to go back to menu ------");
        getch();
        main();
    }

    else if (mainmenu_selection == 4) // exits the game
    {

    }


}

