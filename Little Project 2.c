#include <stdio.h>
/*��������
ĳ����ĳ�꿪ʼÿ�궼�ٰ�һ������party������ÿ�ζ�Ҫ��Ϩ��������ͬ����������
��������������һ����Ϩ��236������
���ʣ����Ӷ����꿪ʼ������party�ģ�*/ 
int main(){
	int i;
	int j;
	int e;
	int m;
	int sum=0;
	for(i=1;e!=236;i++){
		m=i;
		while(sum<236){
			sum=sum+m;
			m=m+1;
		}
		e=sum;
		sum=0;
	}
	printf("%d",i);
}
