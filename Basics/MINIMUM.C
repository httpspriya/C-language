/*
  Name:Priyanshi Sondagar
  Program:find minimum value among 3 diffrent values using simple if
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
	if(a<b && a<c)
	{
		printf("\n minimum value is a");
	}
	if(b<a && b<c)
	{
		printf("\n minimum value is b");
	}
	if(c<a && c<b)
	{
		printf("\n minimum value is c");
	}
	getch();
}
