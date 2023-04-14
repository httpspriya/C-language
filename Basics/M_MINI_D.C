/*
  Name:Priyanshi Sondagar
  Program:Program to find maximum and minimum digit among all digits of number
*/
void main()
{
	int no,rem,max=0,mini=9;
	clrscr();
	printf("\t\t\t Max. mini. digit amaong all digits of number");
	printf("\n Enter any number:");
	scanf("%d",&no);
	while(no>=1)
	{
		rem=no%10;
		no=no/10;
		if(max<rem)
		{
			max=rem;
		}
		if(mini>rem)
		{
			mini=rem;
		}
	}
	printf("\n Maximum digit is %d",max);
	printf("\n Minimum digit is %d",mini);
	getch();
}
