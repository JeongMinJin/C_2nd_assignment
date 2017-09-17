#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void Gamer(void);
void Computer(void);

int main(void)
{
	int start;

	printf("Menu \n1. First Start. \n2. Second start. \n: ");
	scanf("%d", &start);

	if(start == 1) Gamer();
	else Computer();

	return 0;
}

void Gamer(void)
{
	int number, computer;

	printf("Call One of Number between 1 and 3 : \n");

	do
	{
		printf("Gamer : ");
		scanf("%d", &number);

		srand((long) time(NULL));
		computer = rand() % 3 + (number+1);

		if(number != 30)
		{
			if(computer >= 30) printf("Computer : 30\nYou Win!\n");
			else printf("Computer : %d\n", computer);
		}

		if(number == 30) printf("You Lose!\n");
	
	}while(number < 30 && computer < 30);
}

void Computer(void)
{
	int number, computer;

	srand((long) time(NULL));
	computer = rand() % 3 + 1;

	printf("Computer : %d\n", computer);

	do
	{
		printf("Gamer : ");
		scanf("%d", &number);

		srand((long) time(NULL));
		computer = rand() % 3 + (number+1);

		if(number != 30)
		{
			if(computer >= 30) printf("Computer : 30\nYou Win!\n");
			else printf("Computer : %d\n", computer);
		}

		if(number == 30) printf("You Lose!\n");

	}while(number < 30 && computer < 30);
}