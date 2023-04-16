/*

    Name: Priyanshi Sondagar

    Prog.:Prog. to store students data in a file using fread and fwrite 

*/

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#define SZ 5

#define SZ1 50

void main()

{

    FILE *fp;

    struct student

    {

        int no;

        char name[20];

        char dob[10];

        char city[20];

        char add[SZ1];

	char email[20];
    }s;

    int i=0,j=0,count=0;

    char ch;

    clrscr();

    fp=fopen("stuinfo.txt","wb");

    for(i=0;i<SZ;i++)

    {

        printf("\nEnter roll no:");

	scanf("%d",&s.no);

        printf("\nEnter name:");

        fflush(stdin);

	gets(s.name);

        printf("\nEnter DOB:");

        fflush(stdin);

	gets(s.dob);

	printf("\nEnter city:");

	fflush(stdin);

	gets(s.city);

	printf("\nEnter address :press @ to finish it:");

	j=0;

        do

        {

	    ch=getchar();

	    s.add[j]=ch;

	    j++;

	}while(ch!='@');

	j--;

	s.add[j]='\0';

	printf("\nEnter email:");

	fflush(stdin);

	gets(s.email);

	fwrite(&s,sizeof(struct student),1,fp);

    }

    fclose(fp);

    printf("\n Data stored in stuinfo.txt is:");

    fp=fopen("stuinfo.txt","rb");

    while(fread(&s,sizeof(struct student),1,fp))

    {

	printf("\n\nRoll no: %d",s.no);

	printf("\nName: %s",s.name);

	printf("\nDOB: %s",s.dob);

	printf("\nCity: %s",s.city);

	printf("\nAddress: %s",s.add);

	printf("\nEmail: %s",s.email);

	count++;

	if(count%2==0)

	{

	    printf("\nEnter any char to continue...");

	    getch();

	}

    }

    fclose(fp);

    getch();

}
