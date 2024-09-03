#include <stdio.h>

int main (void)
{
	int a[] = {2, 3, 10, 1, 9, 8};
	int b[] = {3, 2, 10, 9, 8};
	
	int size = sizeof(a) / sizeof(a[0]);
	
	
	int size2 = sizeof(b) / sizeof(b[0]);

 	printf("THE AMOUNT OF NUMBERS IN THE FIRST ARRAY : %i\n", size);
 	printf("THE AMOUNT OF NUMBERS IN THE SSCOND ARRAY : %i", size2);
   printf("\n"); 
   
   printf("THE COMMON ELEMNTS ARE : ");
  for (int i = 0; i <= size; i++) {
  for (int j = 0; j <= size2; j++) {
  if ( a[i] == b[j]) {
  printf("%d ", a[i]);
  
  }
  } 
  }
printf("\n");


return 0;
}
