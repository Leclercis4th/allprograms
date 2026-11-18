#include<stdio.h>
#include<math.h>
long long sum(int k);
double pow_lamda(double lamda,int k);
int main()
{
    int k;
    double lamda,P;
    scanf("%lf%d",&lamda,&k);
    P=exp(-lamda)*(pow_lamda(lamda,k)/(1.0*sum(k)));
    printf("%.6lf",P);
    return 0;
}
long long sum(int k){
    if(k==0){
        return 1;
    }else{
        int sum=1;
        for(int i=1;i<=k;i++){
            sum=sum*i;
        }
        return sum;
    }
}
double pow_lamda(double lamda,int k){
    if(k==0){
        return 1.0;
    }else{
        double sum=1.0;
        for(int i=0;i<k;i++){
            sum=sum*lamda;
        }
        return sum;
    }
}