#include<stdio.h>
int main(){
	int number, i, prime=0;
	printf("Enter a positive number: ");
	scanf("%d", &number);

	//Check if it is a prime number
	for (i=2; i<number/2; i++){
		if (number % i == 0){
			prime = 1;
		}
	}
	if (number == 1)
		printf("The number is neither prime nor composite\n");
	else if(prime==1)
		printf("The number is not prime.\n");
	else
		printf("The number you entered is prime.\n");
}
