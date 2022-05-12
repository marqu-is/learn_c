#include<stdio.h>
int main()
{
char c;
printf("Give me a char: ");
scanf("%c",&c);
if((c>='a' &&c<='z') || (c>='A'&& c<='Z'))
printf("%c - alphabet\n",c);
else
printf("%c - it don't the alphabet\n",c);
return 0;
}
