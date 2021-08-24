/*-------------------------------------------------------------
 * File: DoubleTrouble.c
 *
 *	        Illustrates floating points comparison problems
 *------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x;
	double y;

	/* -------------------------------------------------------- */	  	     
	/* Simple case where floating point comparisons do not work */
	x = 9.3 * 0.1;
	y = 0.93;

	if (fabs(x - y) < 0.0001)
	{
		printf("they're equal of course %.10f %.10f\n",x, y );
	}
	else 
	{
		printf("not equal!?, how come?%.10lf %.10f\n",x, y);
		
	}   
	   
	   	      
	return 0;
}

