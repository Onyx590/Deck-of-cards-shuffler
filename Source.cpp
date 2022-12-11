#include <iostream>
#include <iomanip>
#include <ctime>


int main()
{
	const int CARDNUM = 52;
	int deck[CARDNUM];
	std::string suits[] = { "Spades", "hearts", "diamonds", "clubs" };
	std::string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

	for (int i = 0; i < CARDNUM; i++)
		deck[i] = i;
	
	srand(time(0));


	for (int i = 0; i < CARDNUM; i++)
	{
		int index = rand() % CARDNUM;
		int temp = deck[i];
		deck[i] = deck[index];
		deck[index] = temp;
	}

	for (int i = 0; i < 4; i++)
	{
		std::string suit = suits[deck[i] / 13];
		std::string rank = ranks[deck[i] / 13];
		std::cout << "Card number " << deck[i] << ": " << rank << " of " << suit << std::endl;
	}


	


	return 0;
}