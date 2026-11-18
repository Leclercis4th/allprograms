#include<stdio.h>
void method(int n);
int met=0;
int main()
{
    int n;
    scanf("%d",&n);
    method(n);
    printf("%d\n",met);
    return 0;
}
void method(int n){
    if(n<0) met=met;
    else if(n==0) met=met+1;
    else{
        method(n-1);
        method(n-2);
    }
}