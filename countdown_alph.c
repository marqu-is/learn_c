/*This is countdown alphabet*/
#include <stdio.h>
#include <unistd.h>
int main(void)
{
char i;
scanf("%c",&i);
while(i>='a')
{
	write(1,&i,1);
	i--;
}
write(1,"\n",1);
return 0;
}
