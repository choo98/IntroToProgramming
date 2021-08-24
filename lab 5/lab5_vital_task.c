#include <stdio.h>
#include <string.h>
int main()
{
    char floor[10][10];
    int x,y,turtle[10][10];
    char input[100];
    int check, quit = 0;
    int row = 5, col = 5;

    for(x=0;x<10;x++){
        for(y=0;y<10;y++)
        {
            floor[x][y]='0';
        }
    }

    do{

        floor[row][col] = '1';
        for(x=0;x<10;x++)
        {
            for(y=0;y<10;y++)
            {
                printf("|  %c  |",floor[x][y]);

            }
            printf("\n");
        }
        printf("Enter input: ");
        gets(input);
        floor[row][col] = '@';
        if (strcmp(input, "W") == 0 || strcmp(input, "w") == 0){
            row--;

        }
        if (strcmp(input, "S") == 0 || strcmp(input, "s") == 0){
            row++;

        }
        if (strcmp(input, "A") == 0 || strcmp(input, "a") == 0){
            col--;

        }
        if (strcmp(input, "D") == 0 || strcmp(input, "d") == 0){
            col++;

        }

        system("cls");
    }while(quit == 0);

}
