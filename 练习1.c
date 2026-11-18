#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,P;
    scanf("%d%d",&n,&P);
    int *a=(int *)malloc(n*sizeof(int));
    int *b=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
        *(b+i)=i;
    }
    for(int i=0;i<P;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int hold=a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
                int holdb=b[j];
                b[j]=b[j+1];
                b[j+1]=holdb;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(b+i)+1);
    }
    free(a);
    free(b);
    return 0;
}