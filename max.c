#include <stdio.h>
int main()
{
double n1,n2,n3;
printf("Give me 3 numbers: ");
scanf("%lf %lf %lf",&n1,&n2, &n3);
if (n1>=n2 && n1>=n3)
	printf("%.2f - max\n",n1);
if (n2>=n1 && n2>=n3)
	printf("%.2f - max\n",n2);
if (n3>=n1 && n3>=n2)
	printf("%.2f - max\n",n3);
return 0;
}
