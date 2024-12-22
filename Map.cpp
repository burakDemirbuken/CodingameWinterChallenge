#include "head.hpp"

// finish

Map::Map()
{

}

Map::~Map()
{

}

void Map::setMapTile(int x, int y, Tile tile)
{
	_map[x][y] = tile;
}

e_mapTile Map::getMapTile(int x, int y) const
{
	return _map[x][y].tile;
}

int Map::getWidth() const
{
	return _width;
}

int Map::getHeight() const
{
	return _height;
}

Map &Map::operator=(const Map &map)
{
	_width = map.getWidth();
	_height = map.getHeight();
	_map = map._map;
	return *this;
}

void	Map::resetMap()
{
	for (int i = 0; i < _width; i++)
		std::fill(_map[i].begin(), _map[i].end(), Tile());
}

void	Map::startMap()
{
	cin >> _width >> _height; cin.ignore();
	_map.resize(_width);
	for (int i = 0; i < _width; i++)
		_map[i].resize(_height);
}
