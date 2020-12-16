#include <iostream>
#include <math.h>
#include "Elo.h"

namespace elo
{
	/*
	* Calculates expectency of player to win
	*/

	float expectedOutcome(float player, float opponent)
	{
		return (float) 1 / (1 + pow(float(10), (opponent - player) / 400));
	}

	/*
	* Calculates the elo gained or lost in the match
	* returns -1 for invalid score
	*/
	float ratingChange(int score, float expected, int K)
	{
		if (score != 0 && score != 1)
		{
			return -1;
		}
		
		return K * (score - expected);
	}
}
