#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(i==0 || j==0 || i==a-1 || j==a-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}