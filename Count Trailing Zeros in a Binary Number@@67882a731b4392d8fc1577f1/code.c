#include <stdio.h>

int main() {
  int a,b;
  scanf("%d",&a);
  while(a!=0){
    b++;
    a=a<<!;
  }
  printf("%d",32-b);
    return 0;
}