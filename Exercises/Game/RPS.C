#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Global variables
int rounds,i ,botChoice,playerChoice,playerWin=0,botWin=0;

void round()
{
    srand(time(NULL));
    printf("\nPress-1 : Rock\nPress-2 : Paper\nPress 3 : Scissor");
    do
    {
	printf("\nEnter your choice:");
	scanf("%d",&playerChoice);
    }while(playerChoice>3 || playerChoice==0);
    botChoice= (rand() % (3-1+1))+1;// (rand() % (upper boundary -lower boundry+1))+ lower boundary;
}
void game()
{
    switch(playerChoice)
    {
	case 1:
	       printf("\nYou selected Rock");
	       break;
	case 2:
	       printf("\nYou selected Paper");
	       break;
	case 3:
	       printf("\nYou selected Scissor");
	       break;
    }
    switch(botChoice)
    {
	case 1:
	       printf("\n\nBot selected Rock");
	       break;
	case 2:
	       printf("\n\nBot selected Paper");
	       break;
	case 3:
	       printf("\n\nBot selected Scissor");
	       break;
    }
    if(playerChoice==botChoice)
    {
	printf("\n\t\t\tTIE ROUND");
	printf("\nYou.both selected same");
	round();
	game();
    }
    else if((playerChoice==2 && botChoice==1) || (playerChoice==3 && botChoice==2) || (playerChoice==1 && botChoice==3))
    {
	printf("\n\t\t\tYou won this round...");
	playerWin++;
    }
    else
    {
	printf("\n\t\t\tBot won this round...");
	botWin++;
    }
}
void main()
{
    clrscr();
    printf("\n\t\t\tRock Paper Scissor");
    printf("\n\t\t\t~~~~ ~~~~~ ~~~~~~~");
    printf("\n\n\t\"Instructions:\"");
    printf("- There are three objects from which you have to choose any one object  i.e. Rock , Paper & Scissor \n- where, 1. Scissor beats a Paper 2. Paper beats a Stone 3. Stone beats a Scissor");
    printf("\n- the winner is one whose object beats another's object ,If both players choose a same object then it is considered a tie, and play resumes until there is a clear winner.");
    printf("\n\nIn this game you will play againts the bot");
    printf("\nHow many rounds you want to play?:");
    scanf("%d",&rounds);
    for(i=1;i<=rounds;i++)
    {
	printf("\n\t\t\tROUND:-%d",i);
        round();
	game();
    }
    printf("\nYour winnings: %d",playerWin);
    printf("\nBot winnings: %d",botWin);
    if(playerWin==botWin)
    {
	printf("\n\t\t\tIt's a tie...");
    }
    else if(playerWin>botWin)
    {
	printf("\n\t\t\tCongratulations You won the game!!..");
    }
    else
    {
	printf("\n\t\t\tYou lost a game! Better luck next time...");
    }
    getch();
}