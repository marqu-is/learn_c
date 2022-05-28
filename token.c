#include <stdio.h>
	#include <string.h>
	 
	int main(){
	  char str[] = "Hellow World! This string will be tokenized.";
	  char* delimiters = " .!";
	  char* next = strtok(str, delimiters);
	  while(next != NULL){
	     printf("%s\n", next);
	     next = strtok(NULL, delimiters);
	  }
	  system("pause");
	  return 0;
}