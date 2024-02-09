#include<iostream>
using namespace std;

int main() {
	int num1 = 0, num2 = 1, n3, i, number;
	cout << "Enter the number of elements" << endl;
	cin >> number;
	
	cout << num1 << " " << num2 << " ";
	
	for (i = 2; i< number; ++i) {
      		n3 = num1 + num2;
	      	cout << n3 << " ";
	      num1 = num2;
	      num2 = n3;
	}
return 0;
}

