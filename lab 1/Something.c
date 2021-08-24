#include <stdio.h>

int main()
{
     char uname[20];
	 int age;
	 int yearNow;	
	 int yearBorn=0;
	
     printf("Please enter your nick name:");
	 scanf("%s", &uname);

     printf("\nYour name is %s\n", uname);
	 
	 printf("\nWhat is your age?:");
	 scanf("%i", &age);
	 
	 printf("\nYour age is %i\n" , age);
	 
	 printf("\nWhat year is this:");
	 scanf("%i" , &yearNow);	
	 
	 printf("\nThe year is %i\n" , yearNow);
	 
	 yearBorn=yearNow - age;
	 
	 printf("\n%i - %i = %i\n", yearNow , age, yearBorn );
	 
	 printf("\nYou were born in %i\n" , yearBorn);
	 
	 
		
	 
	


     return 0;
}

