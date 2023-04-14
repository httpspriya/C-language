/*
  Name:Priyanshi Sondagar
  Program:find max. value among 3 diffrent values
*/

void main()
{
	float a, b, c,max;
	clrscr();
	printf("\t\t\tMax. value among 3 different values");
	printf("\n Enter value of a:");
	scanf("%f",&a);
	printf("\n Enter value of b:");
	scanf("%f",&b);
	printf("\n Enter value of c:");
	scanf("%f",&c);
	if(a>b && a>c)
	{
		max=a;
	}
	if(b>a && b>c)
	{
		max=b;
	}
	if(c>a && c>b)
	{
		max=c;
	}
	printf("\n Max. no. is=%f",max);
	getch();
}