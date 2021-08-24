#include <stdio.h>
#include <math.h>

int main(void)
{
	int yr;
	int rem;
	int rem2;
	int rem3;
		
	printf("Read year:");
	scanf("%i", &yr);
	
	rem = yr % 4;
	rem2 = yr % 100;
	rem3 = yr % 400;
	
	if(rem == 0)
	{
	
	if (rem2 == 0)
	
    if (rem3 == 0)
	{
		printf("it is a leap year\n");
	}	 
	else
	{
		printf("it is not a leap year\n");	  
	}
	
	}
	else
	{
		printf("It is not a leap year\n");
	}
  
 


return 0;
}

