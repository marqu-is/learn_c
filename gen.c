#include <stdio.h>
#include <stdlib.h>
#include <time.h> // чтобы использовать функцию time()
 
int main(void) {
  srand(time(NULL));
/* генерируем пять случайных целых чисел из отрезка [80;100] */
  printf("%d\n", 0 + rand()%(100));
  printf("%d\n", 0 + rand()%(100));
  printf("%d\n", 0 + rand()%101);
  printf("%d\n", 0 + rand()%101);
  printf("%d\n", 0 + rand()%101);
}