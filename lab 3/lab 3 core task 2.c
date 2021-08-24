#include <stdio.h>
#include <math.h>

int main()
{
double temp;
int lowest = 38;
char bup;
char cn = 'n';
char cy = 'y';




	printf("please enter a temperature:");
	scanf("%lf", &temp);
	
	if (temp < lowest)
	{
		temp = lowest;
	}
	
	printf("\nis there a backup power?(Y/N):");
	fflush(stdin);
	scanf("%c", &bup);
	
	if ( temp < 50)
	{
		printf("\nnormal mode of operation");
	}
	
	else if ( temp < 80)
	{
		printf("\nturn on circulating fan");
	}
	
	else if( bup == cn)
	{
		printf("\nturn off equipment");
		printf("\nlowest temperature recorded: %.2f", temp);
	}
	

	
	





return (0);
}

