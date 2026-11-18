#include<stdio.h>
int main()
{
	int a[1001],b[1001],sum[1002]={0},i,j,k,n;
	int c;

	// 读第一个数：跳过前导空白，读数字，遇到非数字结束
	j=0;
	while(1){
		c=getchar();
		if(c==EOF) break;
		if(c>='0' && c<='9'){
			a[j++]=c-'0';
		}else if(j>0){
			break;          // 已经读到数字，遇到空白/换行结束
		}
		// j==0 且非数字：前导空白，继续
	}
	// 读第二个数：同样逻辑，自动跳过第一个数后面的所有空白
	k=0;
	while(1){
		c=getchar();
		if(c==EOF) break;
		if(c>='0' && c<='9'){
			b[k++]=c-'0';
		}else if(k>0){
			break;
		}
	}

	// ↓↓↓ 下面一行都不动 ↓↓↓
	if(j>k){
		n=j;
	}else{
		n=k;
	}
	for(i=0;i<n;i++){
		if(i>=j && i<k){
			sum[i]=sum[i]+b[k-i-1];
			if(sum[i]>=10){
				sum[i]=sum[i]-10;
				sum[i+1]=1;
			}
		}else if(i>=k && i<j){
			sum[i]=sum[i]+a[j-i-1];
			if(sum[i]>=10){
				sum[i]=sum[i]-10;
				sum[i+1]=1;
			}
		}else{
			sum[i]=sum[i]+a[j-i-1]+b[k-i-1];
			if(sum[i]>=10){
				sum[i]=sum[i]-10;
				sum[i+1]=1;
			}else if(sum[i]>0){
				sum[i+1]=0;
			}
		}
	}
	if(sum[n]==0){
		for(i=n-1;i>=0;i--){
			printf("%d",sum[i]);
		}
	}else{
		for(i=n;i>=0;i--){
			printf("%d",sum[i]);
		}
	}
	return 0;
}