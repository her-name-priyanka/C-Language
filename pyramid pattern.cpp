#include<stdio.h>
int main() {
	int i, j, rows;
	printf("Enter the rows: ");
	scanf("%d",&rows);
	printf("\n");
	
	for(i=1; i<=rows; i++) {
		for(j=1; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
