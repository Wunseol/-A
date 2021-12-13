#include <stdio.h>
int main()
{
    int a,i,j,n;
    scanf("%d",&a);
    if(a%2!=0){
        printf("0 0");
    }else if(a%4!=0){
        printf("%d %d",a/4+1,a/2);
    }else{
        printf("%d %d",a/4,a/2);
    }
    return 0;
}