#include <stdio.h>
#include <stdlib.h>
int main() {
   //int a = sizeof(int);
   //printf("a = %d\n", a);
   
   int* ptr = (int*) malloc(10*4);
   printf("%d", *ptr);
return 0;

}
