#include <stdio.h>

int main (void)
{
	int arr[] = {8, 12, 1, 9, 15, 20, 12, 13};
	// INITIALIZING PRODUCT
	int product = 1;

int counter = 0;

for(int i = 0; i < 8; i++) {

	if (arr[i] % 2 == 0) {
	
	++counter;
	// THIS MULTIPLIES THE EVEN NUMBERS THAT HAVE BEEN CALLED OUT FROM THE ARRAY
	product *= arr[i]; 
	
	}
}printf("NUMBER OF EVEN NUMBERS : %i\n", counter);
printf("PRODUCT OF EVEN NUMBERS : %i\n",product );


return 0;
}
