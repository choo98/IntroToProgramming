#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
     int integer;
	 float fpnumber;
	 float add;
	 float subtract;
	 float multiplication;

	 char finput[20];
	 char sinput[20];

     printf("** This is an arimethic calculator **\n\n\n");

	 printf("Please enter an integer:");
	 scanf("%s" , &finput);

	 printf("Please enter a floating-point number:");
	 scanf("%s" , &sinput);

	 printf("\n\n\nOutput:\n");

	 integer = atof(finput);
	 fpnumber = atof(sinput);

	 (add=integer + fpnumber);
	 printf("%i + %.2f = %.2f\n" , integer , fpnumber , add);

	 (subtract=integer - fpnumber);
	 printf("%i - %.2f = %.2f\n" , integer , fpnumber , subtract);

	 (multiplication=integer * fpnumber);
	 printf("%i * %.2f = %.2f\n" , integer , fpnumber , multiplication);

	 printf("\n\n\nsucces!!");























      return (0);
}

