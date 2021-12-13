#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i>=0&&i<=6){
            sum=sum+pow(i,2);
            continue;
        }else if(i>6&&i%7!=0&&i%10!=7&&i/10!=7){
            sum=sum+pow(i,2);
            continue;
        }
    }
    printf("%d",sum);
    return 0;
}