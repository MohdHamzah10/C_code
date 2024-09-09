#include<stdio.h>
int main(){
	int n,binary,rem,dec=0,base=1;
	printf("Enter the binary to conver to decimal equivalent: ");
	scanf("%d",&n);
	binary=n;
	while(n>0){
		rem=n%10;
		dec=dec + rem*base;
		n=n/10;
		base=base*2;
	}
	printf("Binary number = %d\n",binary);
	printf("Decimal Number = %d",dec);
	}
