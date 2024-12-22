#include "head.hpp"

// finish

Map Game::map = Map();

Game::Game()
{

}

Game::~Game() {}

void	Game::setTile()
{
	int		x;
	int		y;
	int		owner;
	int		organId; // id of this entity if it's an organ, 0 otherwise
	int		organRootId;
	int		organParentId;
	Tile	tile;
	string	type;
	string	organ_dir; // N,E,S,W or X if not an organ

	cin >> x >> y >> type >> owner >> organId >> organ_dir >> organParentId >> organRootId; cin.ignore();

	switch (type[0])
	{
		case 'W':
			tile.tile = WALL;
			break;
		case 'B':
			if(type.length() == 1)
				tile.tile = B;
			else
				tile.tile = BASIC;
			break;
		case 'R':
			tile.tile = ROOT;
			break;
		case 'T':
			tile.tile = TENTACLE;
			break;
		case 'H':
			tile.tile = HARVESTER;
			break;
		case 'S':
			tile.tile = SPORER;
			break;
		case 'A':
			tile.tile = A;
			break;
		case 'C':
			tile.tile = C;
			break;
		case 'D':
			tile.tile = D;
			break;
		default:
			break;
	}
	switch (owner)
	{
		case 1:
			tile.owner = PLAYER;
			break;
		case -1:
			tile.owner = ENEMY;
			break;
		default:
			tile.owner = NEITHER;
			break;
	}

	map.setMapTile(x, y, tile);
	if (owner != 0)
	{
		e_way	dir;
		switch (organ_dir[0])
		{
			case 'N':
				dir = NORTH;
				break;
			case 'E':
				dir = EAST;
				break;
			case 'S':
				dir = SOUTH;
				break;
			case 'W':
				dir = WEST;
				break;
		}
		if (owner == 1)
			this->_player.addOrgan(Organ(organId, nullptr, nullptr, dir, x, y));
		else
			this->_enemy.addOrgan(Organ(organId, nullptr, nullptr, dir, x, y));
	}

}

void	Game::resetMap()
{
	_map.resetMap();
}

Player	&Game::getPlayer()
{
	return _player;
}

Player	&Game::getEnemy()
{
	return _enemy;
}
