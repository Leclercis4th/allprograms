#include<stdio.h>
void sort_by_subj(int s[][30],int subj,int numper);
int s[1000][30];
int main()
{
	int numsubj,numper,subj;
	scanf("%d%d",&numsubj,&numper);
	for(int i=0;i<numper;i++){
		for(int j=0;j<numsubj+1;j++){
			scanf("%d",&s[i][j]);
		}
	}
	scanf("%d",&subj);
	sort_by_subj(s,subj,numper);
	for(int i=0;i<numper;i++){
		printf("%d %d\n",s[i][0],s[i][subj]);
	}
	return 0;
}
void sort_by_subj(int s[][30],int subj,int numper){
	for(int i=1;i<numper;i++){
		int mark=0;
		for(int j=0;j<numper-i;j++){
			if(s[j][subj]<s[j+1][subj]){
				mark=1;
				int hold1=s[j][subj];
				s[j][subj]=s[j+1][subj];
				s[j+1][subj]=hold1;
				int hold2=s[j][0];
				s[j][0]=s[j+1][0];
				s[j+1][0]=hold2;
			}
		}
		if(mark==0){
			break;
		}
	}
}
//problem here:other unselected subjects'scores are not conversed simultaneously