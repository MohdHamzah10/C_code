#include <stdio.h>
int hcf(int a, int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int lcm(int a,int b,int hcf){
	return (a*b)/hcf;
}
int main(){
	int num1,num2;
	printf("enter first number:\n");
	scanf("%d",&num1);
	printf("enter second number:\n");
	scanf("%d",&num2);
	int h=hcf(num1,num2);
	int l=lcm(num1,num2,h);
	printf("LCM of %d and %d is: %d\n",num1,num2,l);
	printf("HCF of %d and %d is: %d",num1,num2,h);
return 0;
}
