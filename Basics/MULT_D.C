/*
  Name:Priyanshi Sondagar
  Program:Program to find multiplication of all digits of any number
*/
void main()
{
	int no,rem,mult=1;
	clrscr();
	printf("\t\t\t Multiplication of all digits of a number");
	printf("\n Enter any number:");
	scanf("%d",&no);
	while(no>=1)
	{
		rem=no%10;
		no=no/10;
		mult=mult*rem;
	}
	printf("\n Multiplication of all digits is %d",mult);
	getch();
}
