#include <stdio.h>

int main() {
    int m;
    scanf("%d",&m);
    if(m>=90)
    printf("A");
    else if (m>=80)
    printf("B");
    else if ((m>=70)&&(m<80))
    printf("C");
    else if((m>=60)&&(m<70))
    printf("D");
    else
    printf("F");
    return 0;
}