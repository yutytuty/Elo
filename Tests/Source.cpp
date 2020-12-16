#include <iostream>
#include "Elo.h"


int main()
{
	std::cout << elo::ratingChange(1, 0.5) << std::endl;
	std::cin.get();
	return 0;
}
