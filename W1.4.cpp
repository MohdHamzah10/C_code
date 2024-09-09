#include<stdio.h>
int main(){
	int a,b;
	char op,op1 ;
	int result;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Enter the operation:(Plus,Minus,Multiply,divide)\n");
	scanf("%c",&op1);
	scanf("%c",&op);
	switch(op){
		case '+':
			result=a+b;
			printf("The sum of %d and %d is %d",a,b,result);
			break;
		case '-':
			result=a-b;
			printf("Difference of %d and %d is %d",a,b,result);
		    break;
		case '*':
			result=a*b;
			printf("Product of %d and %d is %d",a,b,result);
			break;
		case '/':
			result=a/b;
			printf("Division of %d and %d is %d",a,b,result);
			break;
		default: printf("Enter a valid operation!!");
		break;	
			}
			return 0;	
}
