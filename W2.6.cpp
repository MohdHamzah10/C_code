#include <stdio.h>
int main(){
int num, rev=0,rem, origNum;
printf("Enter the number: \n");
scanf("%d",&num);
origNum=num;
while(num!=0){
	rem = num%10;
	rev = rev*10 +rem;
	num= num/10;
}
if(origNum==rev)
printf("palindrome");
else printf("bhapp");

return 0;
}
