#include <stdio.h>

int main (void) 
{
 // DECLARING TWO ARRAYS THAT CAN CONTAIN 3 ELEMENTS
 int a[3], b[3];
 int alice = 0;
 int bob = 0;
 printf("ENTER ALICE'S SCORES : ");
 
 	// FOR LOOP TO ITERATE THROUGH THREE VALUES OF THE ARRAY
 	for (int i = 0; i < 3; i++) {
 	
 	// THE USER ENTERS THE ELEMENTS IN THE ARRAY FOR ALICE SCORE
 	scanf("%d", &a[i]);
 	}
 	
 	
 	printf("ENTER BOB'S SCORES : "); 
 	for (int i = 0; i < 3; i++) {
 	
 	// THE USER ENTERS THE ELEMENTS IN THE ARRAY FOR ALICE SCORE
 	scanf("%d", &b[i]);
 	
      }
 
 
	for (int i = 0; i < 3; i++) {
	
	// TO CHECK IF ALICE'S SCORE IS GREATER
	if ( a[i] > b[i]) {
	alice++;
	
	
	//CHECKS IF BOBS SCORE IS GREATRER
	}else if( a[i] < b[i]) {
	bob++;
	
	}
    }
 	printf("SCOREs : %d, %d", alice, bob);
 	printf("\n");
 	
 	
 	
 	
 
 return 0;
