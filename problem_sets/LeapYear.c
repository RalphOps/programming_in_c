// CODE FOR DETERMINING A LEAP YEAR WITH SWITCH 

#include <stdio.h>

int main (void)
{
	int year;
	
	printf("ENTER A YEAR : ");
	scanf("%d", &year);
	
	//CRITERIA FOR GETTING A LEAP YEAR
	
	switch(year % 4 ==0 && (year % 100 != 0 || year % 400 == 0)) {
	
	
	case 1:
	printf("%d Is A Leap Year. \n", year);
	break;
	
	case 0:
	printf("%d Is Not A Leap Year. \n", year);
	break;
	
	}
	return 0;
	
}
