#include <stdio.h>

int main (void)
{
	int arr[] = {8, 12, 1, 9, 15, 20, 12, 13};
	int sum = 1;

int counter = 0;

for(int i = 0; i < 8; i++) {

	if (arr[i] % 2 == 0) {
	
	++counter;
	sum += arr[i]; 
	
	}
}printf("NUMBER OF EVEN NUMBERS : %i\n", counter);
printf("SUM OF EVEN NUMBERS : %i\n", sum );


return 0;
}
