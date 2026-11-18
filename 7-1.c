#include<stdio.h>
unsigned long long res(int a,int b,unsigned long long T);
int main()
{
    int a,b,t;
    unsigned long long T=0;
    scanf("%d%d",&a,&b);
    while (scanf("%d",&t)!=EOF)
    {
        T=T+t;
    }
    printf("%llu %llu",T,res(a,b,T));
    return 0;
}
unsigned long long res(int a,int b,unsigned long long T){
    unsigned long long res;
    res=(a*T)/(T+b);
    return res;
}