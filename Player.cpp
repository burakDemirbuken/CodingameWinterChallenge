#include "head.hpp"

4tfinish

Player::Player()
{
	organCount = 0;
}

Player::~Player()
{
}

Proteins &Player::getProteins()
{
	return proteins;
}

int Player::getOrganCount() const
{
	return organCount;
}

Organ &Player::getOrgan(int index)
{
	return organs[index];
}

void Player::setProteins(Proteins proteins)
{
	this->proteins = proteins;
}

void Player::setOrganCount(int organCount)
{
	this->organCount = organCount;
}

void Player::addOrgan(Organ organ)
{
	organs.push_back(organ);
}

void Player::findNearestProtein(int x, int y, TilePos &pos)
{
	if(Game::map.getMapTile(x,y) == A)
	{
		pos = TilePos(x, y);
		return;
	}
	if (x < 0 || y < 0 || x >= Game::map.getWidth() ||
		y >= Game::map.getHeight() ||
		Game::map.getMapTile(x, y) == WALL)
		return;
	Tile tile;
	tile.tile = WALL;
	tile.owner = NEITHER;
	Game::map.setMapTile(x, y, tile);
	findNearestProtein(x + 1, y, pos);
	findNearestProtein(x - 1, y, pos);
	findNearestProtein(x, y + 1, pos);
	findNearestProtein(x, y - 1, pos);
}
