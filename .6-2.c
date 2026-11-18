#include<stdio.h>
#include<string.h>
int a[100001];
void res(int k,int l,int a[],int n,char direction);
void input(int n);
int main()
{
    int n,k,l;
    char direction;
    scanf("%d%d%d",&n,&k,&l);
    scanf(" %c",&direction);
    input(n);
    res(k,l,a,n,direction);
    return 0;
}
void input(int n){
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    return;
}
void res(int k,int l,int a[],int n,char direction){
    unsigned long long sum=0;
    if(direction=='L'){
        if((k-l)<1){
            for(int i=1;i<k;i++){
                sum=sum+a[i];
            }
            printf("%llu\n",sum);
            printf("(ToT)\n");
            return;
        }else{
            for(int i=k-l;i<k;i++){
                sum=sum+a[i];
            }
            printf("%llu\n",sum);
            printf("(^o^)");
            return;
        }
    }else{
        if((k+l)>n){
            for(int i=k+1;i<=n;i++){
                sum=sum+a[i];
            }
            printf("%llu\n",sum);
            printf("(ToT)\n");
            return;
        }else{
            for(int i=k+1;i<=k+l;i++){
                sum=sum+a[i];
            }
            printf("%llu\n",sum);
            printf("(^o^)");
            return;
        }
    }
}