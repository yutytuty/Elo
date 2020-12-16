#pragma once

namespace elo {
	float expectedOutcome(float player, float opponent);

	float ratingChange(int score, float expected, int K = 32);
}
