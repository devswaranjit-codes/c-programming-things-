#include <stdio.h>
int main() {
   int aadhar[10];

   //input 
   int *ptr = &aadhar[0];

   for(int i = 1; i < 10; i++){
     printf("%d index: ", i);  
     scanf("%d", &aadhar[i]);            //ptr + i
   }   


   // output
   printf("Aadhar Numbers: ");
   for(int i = 0; i < 10; i++){
     printf("%d th index = %d\n ",i, aadhar[i] );       // *(ptr + i)
   }

   return 0;
}   
