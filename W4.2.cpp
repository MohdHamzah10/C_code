#include <stdio.h>
int main(){
	int a[100][100];
	int b[100][100];
	int c[100][100];
	int m,n;
	printf("Enter the number of rows and columns of matrix: ");
	scanf("%d %d",&m,&n);
	printf("Enter elemnts of first matrix\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements fo second matrix\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",b[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	   c[100][100]=a[i][j]+b[i][j];
		}
	}
	printf("Addition of matrices a and b is:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",c[i][j]);
		}
	}
}
