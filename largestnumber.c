#include<limits.h> // to include INT_MAX
#include<stdio.h>
int main(){
	int a[]={20, 22,49,83, 99, 21, 100, 78};
	int largest, i;
	int size = sizeof(a)/sizeof(int);

	printf("The elements of array are: \n");

	for(i=0; i<size; i++){
		printf("a[%d] = %d\n", i, a[i]);
	}

	largest = INT_MAX;
	for(i=0; i<size; i++){
		if (largest<a[i])
			largest = a[i];
	}
	printf("The largest number is %d",largest);
}

