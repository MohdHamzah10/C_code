#include<stdio.h>
int main(){
	int t1=0;
	int t2=1;
	int t3,num;
	printf("Enter the number elements of the sequence: ");
	scanf("%d",&num);
	printf("%d\t%d\t",t1,t2);
	for(int i=0;i<num;i++){
		t3=t2+t1;
		printf("%d\t",t3);
		t1=t2;
		t2=t3;
	}
	return 0;
	
}
