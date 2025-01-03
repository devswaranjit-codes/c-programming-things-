#include <stdio.h>
int main() {
     int i;
    int marks[5];

    for(i=0; i<5; i++){
     
        printf("Enter marks : ", marks[i]);
        scanf("%d", &marks[i]);
    }

    for(i=0; i<5; i++){
       if(marks[i]>=35){
         printf("the roll no.s of passed students are %d\n", i);
       }

    }

    

    

return 0;

}