#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0, score = 0,i = 0;
    char sname[20];
    FILE *ptr;

    ptr = fopen("Student.txt", "a");

    if(ptr == NULL)
    {
        printf("File missing noob\n");
        exit(1);
    }



    printf("Enter total number of students:");
    scanf("%i",&total);
    for(i=0; i<total; i++)
    {
    printf("\nEnter name:");
    scanf("%s",&sname);
    printf("Enter score:");
    scanf("%i",&score);

    fprintf(ptr, "%s %i\n",sname,score);

    }

    fclose(ptr);
}
