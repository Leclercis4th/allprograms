#include<stdio.h>
float appropriate(double x);
int main(){
    double x;
    scanf("%lf",&x);
    printf("%.2f",appropriate(x));
}
float appropriate(double x){
    int m=1000*x;
    int n=100*x;
    float res;
    if((m-10*n)>4){
        res=x+0.01;
    }else{
        res=x;
    }
    return res;
}
//错误的