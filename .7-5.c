#include <stdio.h>

int cmp(const void *p1, const void *p2) {
    unsigned int *x = (unsigned int *)p1;
    unsigned int *y = (unsigned int *)p2;
    unsigned long long sum1,sum2;
    unsigned int a=*x;
    unsigned int b=*y;
    sum1=0;sum2=0;
    while((a)!=0 || (b)!=0)
    {
        sum1+=(a)%10;
        sum2+=(b)%10;
        a=(a)/10;
        b=(b)/10;
    }
    if(sum1<sum2) return -1;
    else if(sum1==sum2) return 0;
    else return 1;
}

int main() {
    
}
//constant pointer