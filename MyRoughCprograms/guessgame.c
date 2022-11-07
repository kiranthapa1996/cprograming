//This is a guess game where you guess some number to win 
//To obtain our require result we use while loop and if statements:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int secretno=5;
	int guess;
	int guess_count=0;
	int guess_limit=3;
	int out_guesses=0;
	while(guess!=secretno && out_guesses==0)
	{
		if(guess_count<guess_limit)
		{
			printf("Enter the number:\n");
			scanf("%d",&guess);
			guess_count++;
		}
		else
		{
			out_guesses=1;
			printf("you are out of guesses!!!please try again later...!!!\n");
		}
	}
	if(out_guesses==1)
	{
		printf("you loose!!!\n");
	}
	else
	{
		printf("you won!!!");
	}
	return 0;
}
