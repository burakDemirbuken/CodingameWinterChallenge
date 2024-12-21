#pragma once
#include "head.hpp"

// finish

class Map
{
	private:
		int							_width;
		int							_height;
		vector<vector<Part>>		_map;
	public:
		// structor
		Map();
		~Map();

		Map &operator=(const Map &map);

		// getter
		int getWidth() const;
		int getHeight() const;
		e_mapPart getMapPart(int x, int y) const;

		// setter
		void setMapPart(int x, int y, Part part);
};
