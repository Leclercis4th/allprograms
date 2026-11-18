#include<stdio.h>
void input(int a[],int n);
int search(int a[],int target,int low,int high);
int main()
{
    int a[200000],n,target,res;
    scanf("%d%d",&n,&target);
    input(a,n);
    for(int i=0;i<n-1;i++){
        if(search(a,target-a[i],i+1,n-1)==-1){
            continue;
        }else{
            res=search(a,target-a[i],i+1,n-1);
            printf("%d %d\n",i,res);
            break;
        }
    }
    return 0;
}
void input(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return;
}
int search(int a[],int target,int low,int high){
    if(high==low){
        if(a[low]==target){
            return low;
        }else{
            return -1;
        }
    }
    else{
        int med=(low+high)/2;
        if(a[med]>=target){
            return search(a,target,low,med);
        }else{
            return search(a,target,med+1,high);
        }
    }
}