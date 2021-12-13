#include <stdio.h>
int main()
{
    double Pi=3.14159,v=0;
    int h,r,count=0;
    int i,j;
    scanf("%d %d",&h,&r);
    v=Pi*r*r*h*1.0;
    j=v;
    for(i=0;;i++){
        count++;
        if(v>20*1000){
            printf("%d",count);
            break;
        }else{
            v=v+j;
        }
    }
    return 0;
}