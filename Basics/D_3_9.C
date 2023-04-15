/*
  Name:Priyanshi Sondagar
  Program:check the no. is divisible by 3 but not by 9
*/
void main()
{
	int num;
	clrscr();
	printf("\t\t\t Prog. to find number % by 3 & number % by 9");
	printf("\n Enter any number:");
	scanf("%d",&num);
	if(num%3==0)
	{
		if(num%9==0)
		{
			printf("\n Number is divisible by 3 & 9");
		}
		else
		{
			printf("\n Number is divisible by 3 but not by 9");
		}
	}
	else
	{
		printf("\n Number is not divisible by 3 & 9");
	}
	getch();
}
