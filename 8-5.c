#include<stdio.h>
#include<math.h>
struct complex{
    double r;
    double i;
}z1,z2;
struct complex cal(struct complex z1,struct complex z2,char op);
//float appropriate(double x);
int main()
{
    struct complex z;
    char op;
    while(scanf(" %c",&op)!=EOF){
        scanf("%lf%lf%lf%lf",&z1.r,&z1.i,&z2.r,&z2.i);
        z=cal(z1,z2,op);
        printf("%.2lf %.2lf\n",z.r,z.i);
    }
    return 0;
}
struct complex cal(struct complex z1,struct complex z2,char op){
    struct complex z;
    switch (op){
        case '+':
            z.r=z1.r+z2.r;
            z.i=z1.i+z2.i;
            break;
        case '-':
            z.r=z1.r-z2.r;
            z.i=z1.i-z2.i;
            break;
        case '*':
            z.r=z1.r*z2.r-z1.i*z2.i;
            z.i=z1.r*z2.i+z1.i*z2.r;
            break;
        case '/':
            z.r=(z1.r*z2.r+z1.i*z2.i)/(z2.r*z2.r+z2.i*z2.i);
            z.i=(-z1.r*z2.i+z1.i*z2.r)/(z2.r*z2.r+z2.i*z2.i);
            break;
    }
    if(fabs(z.i)<0.5*1e-2){
        z.i=0.0;
    }
    if(fabs(z.r)<0.5*1e-2){
        z.r=0.0;
    }
    //z.i=appropriate(z.i);
    //z.r=appropriate(z.r);
    return z;
}
//float appropriate(double x){
   // int m=100*x;
   // double n=100*x;
   // if((n-m)>0.4) return x+0.01;
   // return x;
//}