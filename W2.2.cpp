#include<stdio.h>
long factorial(int n){
	if(n==0){
	return 1;
	}
	else{
		return (n*factorial(n-1));
	} 
}
int main(){
	int num;
	long fact;
	printf("enter a number: ");
	scanf("%d",&num);
	fact= factorial(num);
	printf("Factorial of %d = %d",num,fact);
	return 0;
	 
	
	
}
