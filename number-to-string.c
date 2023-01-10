/* C program to convert number to string using sprintf() */

#include<stdio.h>
#include<string.h>

int main()
{
	char word[20];
	float a = 32.23;
	sprintf(word,"%f",a);
	printf("\n The String for the number is %s \n", word);
	return 0;
}




