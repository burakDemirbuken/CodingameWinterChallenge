#include "head.hpp"

// finish

Game::Game()
{

}

Game::~Game()
{

}

void	Game::setPart()
{
	int			x;
	int			y;
	int			owner;
	int			organ_id;
	int			organ_parent_id;
	int			organ_root_id;
	Part		part;
	string		type;
	string		organ_dir;

    cin >> x >> y >> type >> owner >> organ_id >> organ_dir >> organ_parent_id >> organ_root_id; cin.ignore();

	switch (type[0])
	{
		case 'W':
			part.part = WALL;
			break;
		case 'B':
			if(type.length() == 1)
				part.part = B;
			else
				part.part = BASIC;
			break;
		case 'R':
			part.part = ROOT;
			break;
		case 'T':
			part.part = TENTACLE;
			break;
		case 'H':
			part.part = HARVESTER;
			break;
		case 'S':
			part.part = SPORER;
			break;
		case 'A':
			part.part = A;
			break;
		case 'C':
			part.part = C;
			break;
		case 'D':
			part.part = D;
			break;
		default:
			break;
	}
	switch (owner)
	{
		case 1:
			part.owner = PLAYER;
			break;
		case -1:
			part.owner = ENEMY;
			break;
		default:
			part.owner = NEITHER;
			break;
	}
	_map.setMapPart(x, y, part);
}
