/*

    Name: Priyanshi Sondagar

    Prog.: Display and store data in a file 

*/

#include <stdio.h>

#include <conio.h>

void main()

{

	int len;
	FILE *fp;

	char str[100],ch;

	clrscr();

	fp=fopen("abc.txt","w");

	printf("\nEnter any string:");

	fflush(stdin);

	gets(str);

	fputs(str,fp);

	fclose(fp);

	fp=fopen("abc.txt","r");

	len=strlen(str);

	printf("\n Total %d characters are stored in abc.txt file",len);

	printf("\n\nThe text is=");

	while((ch=getc(fp))!=EOF)

	{

		printf("%c",ch);

	}

	fclose(fp);

	getch();

}
