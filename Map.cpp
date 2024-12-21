#include "head.hpp"

// finish

Map::Map()
{
	cin >> _width >> _height;
	cin.ignore();
	_map.resize(_width);
	for (int i = 0; i < _width; i++)
	{
		_map[i].resize(_height);
		std::fill(_map[i].begin(), _map[i].end(),Part());
	}
}

Map::~Map()
{

}

void Map::setMapPart(int x, int y, Part part)
{
	_map[x][y] = part;
}
