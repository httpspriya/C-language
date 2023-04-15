/*
     Name:Priyanshi Sondagar
     Prog.:Program to add two fractions
*/
void main()
{
     int numerator1, numerator2, denominator1, denominator2, num_result, denom_result;
     clrscr();
     //read each fractions
     printf("\nEnter first numerator:");
     scanf("%d",&numerator1);
     printf("\nEnter first denominator:");
     scanf("%d",&denominator1);
     printf("\nEnter second numerator:");
     scanf("%d",&numerator2);
     printf("\nEnter second denominator:");
     scanf("%d",&denominator2);
     //compare the denominators
     if(denominator1==denominator2)
     {
	  num_result=numerator1+numerator2;
	  denom_result=denominator1;      //or denominator2 cause both are equal
     }
     else
     {
	  num_result=(numerator1*denominator2)+(numerator2*denominator1);
	  denom_result=denominator1*denominator2;
     }
     printf("\nThe result of %d / %d + %d / %d is= %d / %d",numerator1, denominator1, numerator2, denominator2, num_result, denom_result);
     getch();
}