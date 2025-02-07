#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("a is the maximum number");
    else if((b>a)&&(b>c));
    printf("b is the maximum number");
    else 
    printf("c is the maximum number");
    return 0;
}