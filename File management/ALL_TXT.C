/*



    NAME:Priyanshi Sondagar

    PROG:Create all.txt file store 5 line content and byforget characters into alpha.txt,digit.txt and symbol.txt


*/

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#define SZ 100

void main()

{

    FILE *fp1,*fp2,*fp3,*fp4;

    char ch, str[SZ];

    int i=0;

    clrscr();

    printf("\nPress @ to finish the string");

    printf("\nEnter any string:");

    do

    {

        ch=getchar();

        str[i]=ch;

        i++;

    }while(ch!='@');

    i--;

    str[i]='\0';

    fp1=fopen("all.txt","w"); 

    fputs(str,fp1);

    fclose(fp1);

    fp1=fopen("all.txt","r");

    fp2=fopen("alpha.txt","w");

    fp3=fopen("digit.txt","w");

    fp4=fopen("symbol.txt","w");

    while((ch=getc(fp1))!=EOF)

    {

        if(isalpha(ch))

        {

            fputc(ch,fp2);

        }

        else if(isdigit(ch))

        {

            fputc(ch,fp3);

        }

        else

        {

            fputc(ch,fp4);

        }

    }

    fclose(fp1);

    fclose(fp2);

    fclose(fp3);

    fclose(fp4);

    fp1=fopen("all.txt","r");

    fp2=fopen("alpha.txt","r");

    fp3=fopen("digit.txt","r");

    fp4=fopen("symbol.txt","r");

    printf("\nData in all.txt is:");

    fgets(str,100,fp1);

    puts(str);

    printf("\nData in alpha.txt is:");

    fgets(str,100,fp2);

    puts(str);

    printf("\nData in digit txt is:");

    fgets(str,100,fp3);

    puts(str);

    printf("\nData in symbol.txt is:");

    fgets(str,100,fp4);

    puts(str);

    fclose(fp1);

    fclose(fp2);

    fclose(fp3);

    fclose(fp4);

    getch();

}
