#include <stdio.h>
#include <math.h>

#define SIZE 10

void bk_input(double b[SIZE])
{
    double height=0,weight=0,bmi=0;
    int i=0,x=0;

    for(i=0;i<10;i++)
    {
        printf("Please input your weight(KG) and height(Meters):");
        scanf("%lf %lf",&weight,&height);

        bmi = (weight / (height * height));

        b[i] = bmi;
    }

}

void disp_bk(double b[SIZE])
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("\nstudent %i bmi=%.2lf",i+1,b[i]);
    }
}

void summary(double b[SIZE],int *underw, int *ideal, int *overw, int *obese)
{
    int i=0;

    for(i = 0 ;i < 10;i++)
    {
        if(b[i]<20)
        {
            *underw = *underw + 1;
        }
        else if(b[i]>20 && b[i]<25)
        {
            *ideal = *ideal + 1;
        }
        else if(b[i]>25 && b[i]<30)
        {
            *overw = *overw + 1;
        }
        else if(b[i]>30)
        {
            *obese = *obese + 1;
        }
    }
}

void dispsummary(double b[SIZE],int uw, int idl,int ow,int obs)
{
    printf("\n\nNumber of students underweight:%i\n",uw);
    printf("Number of students ideal:%i\n",idl);
    printf("Number of students overweight:%i\n",ow);
    printf("Number of students obese:%i\n",obs);

}

int main()
{
    double height=0,weight=0,bmi=0,b[SIZE];
    int i=0,x=0,uw=0,idl=0,ow=0,obs=0;

    bk_input(b);
    disp_bk(b);
    summary(b,&uw,&idl,&ow,&obs);
    dispsummary(b,uw,idl,ow,obs);

}
