#include <stdio.h>
int fun(){
	int a,b;
	scanf("%d %d",&a,&b);
	int sum;//���� 
	sum=a;
	int p;//�� 
	int q;//����
	p=a/b;
	q=a%b;
	q=q+p;
	sum=sum+p;
	while(q>=b){
		p=q/b;
		q=q%b;
		q=q+p;
		sum=sum+p;
	}
	return sum;
}

int main(){
	int m;
	scanf("%d",&m);
	int i;
	int j;
	for(i=0;i<m;i++){
		j=fun();
		printf("%d\n",j);
	}
}
