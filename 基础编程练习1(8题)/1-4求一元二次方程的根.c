#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i;
    double de_ta;
    double a,b,c,complex;
    double x1,x2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        de_ta=b * b - 4 * a * c;
        if(de_ta==0){
            x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
            printf("x1=x2=%.5lf\n",x1);
        }else if(de_ta>0){
            x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
        }else if(de_ta<0){
            x1 = sqrt(-1 * de_ta) / (2 * a);
            x2 = (-1) * (b / (2 * a));
            if(b==0){
                printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",x2,-1*x2);
            }else{
                complex = (x1 > 0) ? x1:(-1)*x1;
                printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x2,complex,x2,-1*complex);
            }
        }
    }
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// #include <math.h>
// int main()
// {
//     double a,b,c;
//     double delta;
//     int n;
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         scanf("%lf%lf%lf",&a,&b,&c);
      
//         delta=b*b-4*a*c;
//         if(delta==0)
//         {
//             printf("x1=x2=%.5lf\n",-b/2/a);
//             n-=1;
//         }
//         else if(delta>0)
//         {
//             printf("x1=%.5lf;x2=%.5lf\n",(-b+sqrt(delta))/2/a,(-b-sqrt(delta))/2/a);
//             n-=1;
//         }
//         else
//         {
//             if(b!=0)
//             {
//                 if(fabs(sqrt(-delta)/2/a-1)<=1e-6){
//                     printf("x1=%.5lf+i;x2=%.5lf-i\n",-b/2/a,-b/2/a);
//                     n-=1;
//                 }
//                 else{
//                     printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-b/2/a,sqrt(-delta)/2/a,-b/2/a,sqrt(-delta)/2/a);
//                     n-=1;
//                 }
//             }
//             else{
//                 printf("x1=%.5lfi;x2=-%.5lfi\n",sqrt(-delta)/2/a,sqrt(-delta)/2/a);
//                 n-=1;
//             }  
//         }
//     }
//     return 0;
// }