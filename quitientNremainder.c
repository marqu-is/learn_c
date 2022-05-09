#include <stdio.h>
int main()
{
int dividend,divisor, quotient, remainder;
printf("Give me dividend and divisor:\n");
scanf("%d%d",&dividend,&divisor);
quotient = dividend / divisor;
remainder = dividend % divisor;
printf("Quitient = %d\n", quotient);
printf("Remainder = %d\n", remainder);
return 0;
}
