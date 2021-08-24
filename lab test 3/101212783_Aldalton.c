/* Student Name = Aldalton Choo Chien Khin
 * Student ID = 101212783
 * File name = 101212783_aldalton.c
 * This program is to calculate the area and volume of a rectangular tank */
#include <stdio.h>
#include <math.h>

#define SIZE 3

void winput(double b[SIZE])
{
    double lg = 0, wd = 0, hg = 0;
    int i;

    printf("Please enter the length of the rectangle:");
    scanf("%lf",&lg);
    printf("\nPlease enter the width of the rectangle:");
    scanf("%lf",&wd);
    printf("\nPlease enter the height of the rectangle:");
    scanf("%lf",&hg);


        b[0] = lg;
        b[1] = wd;
        b[2] = hg;



}

void disp(double b[SIZE])
{
    int i;

    printf("length of rectangle = %.2f",b[0]);
    printf("\nwidth of rectangle = %.2f",b[1]);
    printf("\nheight of rectangle = %.2f\n",b[2]);
}

void calctank(double b[SIZE], double *rarea, double *rvol)
{
    *rarea = (b[0] * b[1]);

    *rvol = (b[2] * b[0] * b[1]);
}

int main()
{
    double lg = 0, wd = 0, hg = 0;
    double bk[SIZE],area = 0, vol = 0,water = 0;

    winput(bk);
    disp(bk);
    calctank(bk,&area,&vol);

    printf("\nThe area is %.2lf",area);
    printf("\nThe volume is %.2lf",vol);

    printf("\nPlease enter water consumption:");
    scanf("%lf",&water);

    if(water > vol)
    {
        printf("\nenough water reserved");
    }
    else if(water < area)
    {
        printf("\nnot enough water reserved");
    }
}
