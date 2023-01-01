#include<stdio.h>
int main(){
	int num; //declaring number 
	printf("Enter a number to check if it is even or odd: \n");
	scanf("%d",&num);

	// Check if even or odd
	if (num %2 == 0)
		printf("The number you entered is: %d, and it is an even number\n", num);
	else
		printf("The number you entered is: %d and it is an odd number\n", num);
}
