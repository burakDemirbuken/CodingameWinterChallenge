#pragma once
#include "head.hpp"

// finish

class Game
{
	private:
		Player	_player;
		Player	_enemy;

	public:
		static Map	map;
		// structor
		Game();
		~Game();

		void	setTile();
		void	resetMap();

		// getter
		Player	&getPlayer();
		Player	&getEnemy();
};
