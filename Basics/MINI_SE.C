/*
  Name:Priyanshi Sondagar
  Program:find minimum value among 3 diffrent values
*/
void main()
{
	int x,y,z;
	printf("\t\t\t Find Minimum value among three");
	printf("\n Enter value of x:");
	scanf("%d",&x);
	printf("\n Enter value of y:");
	scanf("%d",&y);
	printf("\n Enter value of z:");
	scanf("%d",&z);
	if(x<y)
	{
		if(x<z)
		{
			printf("\n x is minimun");
		}
		else
		{
			printf("\n z is minimum");
		}
	}
	else //if(y<x)
	{
		if(y<z)
		{
			printf("\n y is minimun");
		}
		else
		{
			printf("\n z is minium");
		}
	}
	getch();f
}