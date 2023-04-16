/*

    Name: Priyanshi Sondagar

    Prog.:
Program to create a file data.txt, enter some text in that file,now read the file data.txt in reverse order and display the characters on the screen.

*/

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

void main()

{

    FILE *fp;

    int i,n;

    char ch,str[25];

    clrscr();

    printf("\nEnter any string:");

    fflush(stdin);

    gets(str);

    fp=fopen("data.txt","w");

    fputs(str,fp);

    fclose(fp);

    printf("\n\n reversed data stored in data.txt file is:");

    fp=fopen("data.txt","r");

    if(fp=='\0')

    {

        printf("\nError in opening file..!!");

	exit(0);
    }

    else

    {

	fseek(fp,0,SEEK_END);

	n=ftell(fp);

	i=0;

	while(i<n)

	{

	    i++;

	    fseek(fp,-i,SEEK_END);

            ch=getc(fp);

            printf("%c",ch);

        }

    }

    fclose(fp);

    getch();

}
