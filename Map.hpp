#pragma once
#include "head.hpp"

// finish

class Map
{
	private:
		int							_width;
		int							_height;
		vector<vector<Tile>>		_map;
	public:
		// structor
		Map();
		~Map();

		Map &operator=(const Map &map);

		// getter
		int getWidth() const;
		int getHeight() const;
		e_mapTile getMapTile(int x, int y) const;

		// setter
		void setMapTile(int x, int y, Tile tile);

		// member functions
		void startMap();
		void resetMap(void);
};
