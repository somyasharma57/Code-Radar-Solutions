#include <stdio.h>

int main() {
   int a;
   scanf("%d",&a);
   if(a%15==0)
   printf("Divisible by both");
   else if(a%3==0)
   printf("Divisible by 3");
   else if (a%5==0)
   printf("Divisible by 5");
   else
   printf("Not Divisible");
    return 0;
}