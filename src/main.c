#include<stdio.h>
#include"mymath.h"
int main(void){
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n");
    printf("add:%d\n",add(a,b));
    printf("sub:%d\n",sub(a,b));
    printf("mul:%d\n",mul(a,b));
    printf("div:%d\n",div(a,b));
    printf("i am 20211120刘钟徽\n");
    return 0;
}
