#include<stdio.h>
void input(int a[],int n);
void bubblesort(int a[],int n);
void output(int a[],int n);
int main()
{
    int a[1000],n;
    scanf("%d",&n);
    input(a,n);
    bubblesort(a,n);
    output(a,n);
    return 0;
}
void input(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return;
}
void bubblesort(int a[],int n){
    for (int  i = 1; i < n; i++)
    {
        int flag=0;
        for (int  j= 0; j < n-i; j++)
        {
            if(a[j]<a[j+1]){
                flag=1;
                int hold=a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
            }
        }
        if (flag==0)
        {
            return;
        }
    }
    return;
}
void output(int a[],int n){
    if((n%2)==0){
        for(int i=0;i<n/2;i++){
            printf("%d ",a[i]);
            printf("%d ",a[n-1-i]);
        }
    }else{
        for(int i=0;i<n/2;i++){
            printf("%d ",a[i]);
            printf("%d ",a[n-1-i]);
        }
        printf("%d",a[n/2]);
    }
    return;
}