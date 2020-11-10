#include <stdio.h>
#include "myMath.h"
int main(){
	double x = 0 ; /*Initiating the parameter .*/
	printf("Please insert a real number :\n"); /*Printing a messege to recieve a number that the user wants to be the X if the following fucntions.*/
    if (!scanf("%lf", &x)) { /*Getting a number from the user and checking if it's  valid . */
      printf("Error: this is not a real number , please enter a real number next time ! \n"); /*If the input is invalid , error message will be printed .*/
      return 0 ; /*Due to the invaldity of the input the main() function will stop .*/
    }
	float irs = sub(add((float)Exponent((int)x),(float)Power(x,3)),2); /*Calculates (i) .*/
	float iires = add((float)(mul(x,3)),(float)(mul((Power(x,2)),2))) ; /*Calculates (ii) .*/
	float iiirs = sub((float)(div((mul(Power(x,3),4)),5)),(float)(mul(x,2))); /*Calculates (ii) .*/
	printf("The value of f(x)=e^x+x^3-2 at the point %f is : %.4f\n",x,irs); /*Prints the result for (i) with 4 digit after point accuracy.*/
	printf("The value of f(x)=3x+2(x^2) at the point %f is : %.4f\n",x,iires); /*Prints the result for (ii) with 4 digit after point accuracy.*/
	printf("The value of f(x)=((4(x^3))/5)-2x at the point %f is : %.4f\n",x,iiirs); /*Prints the result for (iii) with 4 digit after point accuracy.*/
return 0 ; 
}
