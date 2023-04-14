/*
  Name:Priyanshi Sondagar
  Program:find maximum value among 2 values and check if it is equal using else if ladder
*/
void main()
{
	float a,b;
	clrscr();
	printf("\t\t\t Find maximum value");
	printf("\n Enter value of a:");
	scanf("%f",&a);
	printf("\n Enter value of b:");
	scanf("%f",&b);
	if(a>b)
	{
		printf("\n maximun is a");
	}
	else if(b>a)
	{
		printf("\n maximum is b");
	}
	else
	{
		printf("\n both values are equal");
	}
	getch();
}

