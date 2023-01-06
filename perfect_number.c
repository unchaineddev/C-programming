#include<stdio.h>
int main(){
	int num, i, sum=0;

	printf("Enter a positive number: ");
	scanf("%d", &num);


// Perfect number is equal to sum of divisors
	for(i=1;i<num; i++){
		if (num % i == 0){
			sum = sum + i;
		}
	}

	if (sum == num)
		printf("The number %d is a perfect number. \n",num);
	else
		printf("The number you entered is not perfect \n");

	}
