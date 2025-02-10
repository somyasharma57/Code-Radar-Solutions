#include <stdio.h>

int main() {
   int a;
   scanf("%d",&a);
   for(int i = 0; i< 0; i++){
   for(int j=0; j<(a-i) ; j++){
   printf("%c" ,'*');
   }
   printf("\n");
   }
    return 0;
}