#include <stdio.h> /*printf, scanf*/
#include <stdlib.h> /*srand, rand*/
#include <time.h>

int main()
{	
	int iSecret;	
	int iGuess;
	/*initialize random sed*/
	srand(time(NULL) );
	/*generate secret number between 1 and 10*/
	iSecret = rand() % 10+1;

	do
	{
		printf("Guess a random number (1 to 10)\n");
		scanf("%d", &iGuess);
		if (iSecret < iGuess)
		{
			printf("The secret number is lower\n");
		}else if(iSecret >iGuess)
		{
			printf("The secret number is higher \n");
		}
	}while( iSecret != iGuess);
	printf("Congratulations \n");
	return 0;

}
