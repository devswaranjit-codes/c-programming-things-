#include<stdio.h>
int main(){
//    float price = 100.00;
//    float *ptr = &price;
//    float **pptr = &ptr;
   
   int i = 5;
   int *ptr = &i;
   int **pptr = &ptr;

   printf("Value of i using pointer to pointer is : %d\n", **pptr);
    return 0;
}