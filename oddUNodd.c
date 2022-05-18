#include <stdio.h>

int main()
{
    int number;
    char alpha;
    printf("Do u wish to know even or odd?\nGive me a number.");
    scanf("%d",&number);
 if(number % 2==0)
 printf("%d - even\n",number);
 else 
 printf("%d - odd\n",number);

    return 0;
}
