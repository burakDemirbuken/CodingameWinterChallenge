#pragma once
#include "head.hpp"

// finish

class Game
{
	private:
		Player	_player;
		Player	_enemy;
		Map		_map;

	public:
		// structor
		Game();
		~Game();

		// getter
		void	setPart();
};
