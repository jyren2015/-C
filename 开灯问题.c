#include <stdio.h>

int main(){
	int n,k;//nΪ����Ŀ��kΪ���� 
	scanf("%d %d",&n,&k);
	int b[n];
	int i;
	for(i=0;i<n;i++){//��ʼ�����еƣ�1��ʾ������0��ʾ���� 
		b[i]=1;
	}
	int j;
	int p;
	for(j=2;j<=k;j++){
		for(p=j-1;p<n;p=p+j){
			if(b[p]==1){
				b[p]=0;
			}else if(b[p]==0){
				b[p]=1;
			}
		}
	}
	int u;
	for(u=0;u<n;u++){
		if(b[u]==1){
			printf("%d ",u+1);
		}
	}
}
