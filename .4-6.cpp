#include<stdio.h>
int main()
{
	int n,a[9]={0},i,person,age,gender;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&age,&gender);
		person=age*10+gender;
		switch(person){
			case 0:a[0]=a[0]+1;
			break;
			case 1:a[1]=a[1]+1;
			break;
			case 2:a[2]=a[2]+1;
			break;
			case 10:a[3]=a[3]+1;
			break;
			case 11:a[4]=a[4]+1;
			break;
			case 12:a[5]=a[5]+1;
			break;
			case 20:a[6]=a[6]+1;
			break;
			case 21:a[7]=a[7]+1;
			break;
			case 22:a[8]=a[8]+1;
			break;
		}
	}
	printf("%d %d %d\n%d %d %d\n%d %d %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
	return 0;
}