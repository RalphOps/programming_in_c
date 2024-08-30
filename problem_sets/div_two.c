#include <stdio.h>

void main (void)
{

 int i = 10;
 int j = 5;
 int Answer = div_two(i,j);
 
 printf("The Numerator %d Divided by the denominator %d = %d", i, j, Answer);
 
}

int div_two (int num1, int num2)
{

int result = num1 / num2;
return result;

}
