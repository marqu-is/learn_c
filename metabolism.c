#include <stdio.h> 
int main(void){
	
  int age, height, weight;
  double bov_m, bov_f;
  
  printf("Vash vozrast?(god)\n");
  scanf("%d", &age); 
	
  printf("Vash rost?(cm)\n");
  scanf("%d", &height); 
	
  printf("Vash ves?(kg)\n");
  scanf("%d", &weight); 
	if(age||height||weight<=0)
	{
	    printf("Ti pushinka!");
	}
	else
	{
  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;
  printf("\tBMR\t\n");
  printf("|  male  | female |\n");
  printf("|%8.2f|%8.2f|\n",bov_m, bov_f);
	}
  return 0;
}
