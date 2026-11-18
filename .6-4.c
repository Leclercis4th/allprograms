#include<stdio.h>
int a[200001]={0};
int max(int a[],int n);
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",max(a,n));
   return 0;
}
int max(int a[],int n){
   int max=0;
   for(int i=0;i<n;i++){
      int b;
      scanf("%d",&b);
      a[b]+=1;
      if(a[b]>max){
         max=a[b];
      }
   }
return max;
}