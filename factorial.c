#include<stdio.h>

int main(){
	int i, n, fact =1;
	printf("Enter the number to find the factorial: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		fact = fact * i;
	}
	printf("The factorial of number is %d \n",fact);
	return 0;
}
