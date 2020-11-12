#include "myMath.h"
/*Function that calculates x^y recursively with a stop condition at y=1 or returns 1 if y=0  or returns 0 if x=0. */
double Power(double x, int y){
    if (x==0){
        return 0;
    }
    if (y==1){
		return x;
	}
	if (y>1){
		return( x* Power(x,(y-1)));
	}
    if(y<0){
        return ((1/(Power(x,((-1)*(y))))));
    }
	return  1;
}
/*Function that calculates e^x where e is Euler's number , a constant equal to 2.718281. */
double Exponent(int x){
	return Power(EULER,x);
}
