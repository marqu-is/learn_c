
#include <stdio.h>
int main(void)
{
float num1,num2,div;
printf("Vvedi num1,num2\n");
scanf("%f%f",&num1, &num2);
div = num1/num2;
printf("%.29f\n", div);
printf("why did you get it?");
return 0;
}