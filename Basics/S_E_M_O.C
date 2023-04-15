/*
  Name:Priyanshi Sondagar
  Program:Program to find sum of even digit and multiplication of odd digit
*/
void main()
{
	int no,rem,mult=1,sum=0;
	clrscr();
	printf("\t\t\t Sum of even digits and multiplication of odd digits");
	printf("\n Enter any number:");
	scanf("%d",&no);
	while(no>=1)
	{
		rem=no%10;
		no=no/10;
		if(rem%2==0)
		{
			sum=sum+rem;
		}
		else
		{
			mult=mult*rem;
		}
	}
	printf("\n Sum of even digits is=%d",sum);
	printf("\n Multiplication of odd digits is=%d",mult);
	getch();
}

