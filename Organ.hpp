#pragma once
#include "head.hpp"

// finish

class Organ
{
	private:
		int		id;
		Organ	*parent;
		Organ	*root;
		e_way	direction;
		int		x;
		int		y;

	public:
		Organ(int id, Organ *parent, Organ *root, e_way direction, int x, int y);
};
