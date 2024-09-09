#include<stdio.h>
int main(){
	int n,a[10],i;
	printf("Enter the decimal to convert to binary equivalent: ");
	scanf("%d",&n);
	printf("Decimal = %d\n",n);
	for(i=0;n>0;i++){
		a[i]=n%2;
		n=n/2;
	}
	printf("Binary = ");
	for(i=i-1;i>=0;i--){
	printf("%d",a[i]);
	}
	
	
}
