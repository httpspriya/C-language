/*

   NAME: Priyanshi Sondagar

   PROG.:Store 10 numbers in a file and then seperate even and odd numbers in differnt files


*/

#include <stdio.h>

#include <conio.h>

#define SZ 10

void main()

{

    FILE *all ,*even ,*odd;

    int i,no[SZ],num;

    clrscr();

    all=fopen("integer.txt","w");

    even=fopen("even.txt","w");

    odd=fopen("odd.txt","w");

    printf("\nEnter 10 numbers:");

    for(i=0;i<SZ;i++)

    {

        printf("\nEnter no-%d:",i+1);

        scanf("%d",&no[i]);

	putw(no[i] ,all);
        if(no[i]%2==0)

        {

	    putw(no[i] ,even);

        }

        else

        {

	    putw(no[i] ,odd);

	}

    }

    fclose(all);

    fclose(even);

    fclose(odd);

    all=fopen("integer.txt","r");

    even=fopen("even.txt","r");

    odd=fopen("odd.txt","r");

    printf("\nAll integer nums. are:");

    while((num=getw(all))!=EOF)

    {

        printf("%d\t",num);

    }

    printf("\nAll even nums. are:");

    while((num=getw(even))!=EOF)

    {

        printf("%d\t",num);

    }

    printf("\nAll odd nums are:");

    while((num=getw(odd))!=EOF)

    {

        printf("%d\t",num);

    }

    fclose(all);

    fclose(even);

    fclose(odd);

    getch();

}

    
