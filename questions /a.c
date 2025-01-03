#include<stdio.h>
int main()
{
    int x = 500;
while (x <= 500) {
    x = x - 600;
    if (x < 0) 
        break;
}
return 0;

}