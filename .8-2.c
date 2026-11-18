#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    long long sum=0;
    double miu,theta;
    long double sum2=0;
    scanf("%d",&n);
    int *p=(int *)malloc(4*n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    miu=(1.0*sum)/n;
    if(fabs(miu)<0.5*1e-4) printf("0.0000\n");
    else printf("%.4lf\n",miu);
    for(int i=0;i<n;i++){
        sum2+=(p[i]-miu)*(p[i]-miu);
    }
    theta=sqrt(sum2/n);
    for(int i=0;i<n;i++){
        if(fabs((p[i]-miu)/theta)<0.5*1e-4){
            printf("0.0000\n");
        }else printf("%.4lf\n",(p[i]-miu)/theta);
    }
    return 0;
}//溢出、四舍五入