#include <stdio.h>

int main() {
   int N;
   scanf("%d",&N);
   for(int i = N; i< 0; 1--){
   for(int j=0; j<i ; j++){
   printf("%c" ,'*');
   }
   printf("\n");
   }
    return 0;
}