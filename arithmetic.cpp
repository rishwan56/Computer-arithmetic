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
    long long aq = dividend;
    int b = divisor;
    bool sign = 1;
    if((aq < 0 && b >= 0 ) || (aq >= 0 && b < 0)) sign = -1;
    aq = aq >= 0 ? aq : -aq;
    b = b >= 0 ? b : -b;
    
 }