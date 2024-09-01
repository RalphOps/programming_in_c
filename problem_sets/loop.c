#include <stdio.h>
 
 /*
 {
int i=10; 
 while(i>=0){
 
 printf(" %d ",i);
 
 i--;
 }
 printf("\n");
 */
 
 int main () 
 {
 void print_rectangle(int lenght, int breadth);
 
 
 
 print_rectangle(5, 5);
 
 return 0;
 }
 
 void print_rectangle(int length, int breadth)
 {
 int i=1;
 while( i<=length)  {
 i++;
 //prints the stars
 int j=1;
 while(j=i){
 j++;
 printf("* ");
 } 
 //print new lines
 printf("\n");
 }
 
 }
