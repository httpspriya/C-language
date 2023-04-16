/*

   NAME: Priyanshi Sondagar

   Prog.:Encrypt the data while storing in a file and read data from the file in decrpted mode


*/

#include <stdio.h>

#include <conio.h>



void main()

{

    FILE *fp;

    char str[25];

    int i;

    clrscr();

    printf("\nEnter any string:");

    fflush(stdin);

    gets(str);

    fp=fopen("encrypt.txt","w"); 

    for(i=0;str[i]!='\0';i++)

    {

        fputc(str[i]+10,fp);

    }

    fclose(fp);

    fp=fopen("encrypt.txt","r"); 

    fgets(str,25,fp);

    printf("\nEncrypt.txt= %s",str);

    printf("\nDecrypt=");

    for(i=0;str[i]!='\0';i++)

    {

        printf("%c",str[i]-10);

    }

    fclose(fp);

    getch();

}

    
