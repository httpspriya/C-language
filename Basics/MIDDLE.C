/*
  Name:Priyanshi Sondagar
  Program:find middle value among 3 diffrent values
*/
void main()
{
	float a,b,c;
	clrscr();
	printf("\t\t\t Find middle value");
	printf("\n Enter value of a:");
	scanf("%f",&a);
	printf("\n Enter value of b:");
	scanf("%f",&b);
	printf("\n Enter value of c:");
	scanf("%f",&c);
	if(a>b && a<c || a<b && a>c)
	{
		printf("\n middle value is a");
	}
	if(b>a && b<c || b<a && b>c)
	{
		printf("\n middle value is b");
	}
	if(c>a && c<b || c<a && c>b)
	{
		printf("\n middle value is c");
	}
	getch();
}