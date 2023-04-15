/*
     Name:Priyanshi Sondagar
     Prog.:Program to check type of input character
*/
#include <stdio.h>
#include <conio.h>
void main()
{
     char ch;
     clrscr();
     printf("\nEnter any character:");
     scanf("%c",&ch);
     if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
     {
	  printf("\nEntered character is an alphabet");
     }
     else if(ch>=48 && ch<=57)
     {
	  printf("\nEntered character is an digit");
     }
     else
     {
	  printf("\nEntered character is a special symbol");
     }
     getch();
}