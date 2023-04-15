/*
  Name:Priyanshi Sondagar

  Program:Program to check for Armstrong number8
*/
void main()
{
	int no,rem,sum=0,temp;
	clrscr();
	printf("\t\t\t Program to check Armstrong number");
	printf("\n Enter any number:");
	scanf("%d",&no);
	temp=no;
	while(no>=1)
	{
		rem=no%10;
		no=no/10;
		sum=sum+(rem*rem*rem);
	}
	if(temp==sum)
	{
		printf("\n Number is Armstrong");
	}
	else
	{
		printf("\n Number is not Armstrong");
	}
	getch();
}
