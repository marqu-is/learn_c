#include <stdio.h>
#include <stdlib.h>
#include <time.h> // ����� ������������ ������� time()
 
int main(void) {
  srand(time(NULL));
/* ���������� ���� ��������� ����� ����� �� ������� [80;100] */
  printf("%d\n", 0 + rand()%(100));
  printf("%d\n", 0 + rand()%(100));
  printf("%d\n", 0 + rand()%101);
  printf("%d\n", 0 + rand()%101);
  printf("%d\n", 0 + rand()%101);
}