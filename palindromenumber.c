#include<stdio.h>
int main(){
	int number, lastdig, orig_no, rev=0;
	printf("Enter a palindrome number\n");
	scanf("%d",&number);

	// original number is equal to the number user inputted
	orig_no = number;

	// Loop will execute only if number is not 0
	while(number!= 0){
		// To find the last digit and finds the remainder, we use % 10
		lastdig = number%10;
		
		// To reverse the number we multiply by 10 
		rev = rev*10 + lastdig;

		number = number/10;
	}
	if(orig_no == rev)
		printf("The number %d is palindrome \n",number);
	else
		printf("The number %d is not palindrome \n",number);
	}

