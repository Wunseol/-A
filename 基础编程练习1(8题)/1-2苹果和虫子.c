#include <stdio.h>
int main()
{
    double a;
    int num,n;
    int x,y;
    scanf("%d %d %d",&n,&x,&y);
    a=y*1.0/x;
    num=(n-a)/1;
    printf("%d",num);
    return 0;
}