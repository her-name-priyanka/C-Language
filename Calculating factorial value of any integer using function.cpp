#include<stdio.h>
int fact(int);

int main()
{
	int num; 
	int factorial;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	factorial = fact(num);
	printf("Factorial is: %d",factorial);
	
	return 0;
}

int fact(int num){
	int i;
	int factorial = 1;
	for(i=1; i<=num; i++)
	factorial = factorial * i;
	return (factorial);
}
