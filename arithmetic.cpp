#include "arithmetic.h"
long long mutliply(int multiplicand, int multiplier) {
	long long product = 0;
	int sign;
	if(multiplicand < 0 && multiplier < 0) sign = 1;
	else if (multiplicand < 0 || multiplier < 0) sign = -1;
	else sign = 1;
	multiplicand = multiplicand >= 0 ? multiplicand : -multiplicand; 
	multiplier = multiplier >= 0 ? multiplier : -multiplier;
    	while(multiplier > 0)
    	{
        	if(multiplier & 1)
            	product += multiplicand;

        	multiplicand <<= 1;
        	multiplier >>= 1;
    	}
	return (product * sign);
	}

int divide(long long dividend, int divisor){
	
	bool negative  = (dividend < 0) ^ (divisor < 0);

	unit32_t Q = abs(dividend);
	unit32_t B = abs(divisor);
	unit32_t A = 0;

	for(int i = 0; i < 32; i++){
		A = (A << 1) | ((Q >> 31) & 1);
		A = A - B;
		if(A < 0){
			A = A + B;
			Q &= ~1U;	
		}	
		else{
			Q |= 1U;
		}
	} 
	int quotient = (int)Q;
	int remainder = A;

	if(negative) return -q;
	else return q;	
	    
 }
