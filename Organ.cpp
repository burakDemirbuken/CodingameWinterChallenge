#include "head.hpp"

// finish

Organ::Organ(int id, Organ *parent, Organ *root, e_way direction, int x, int y)
{
	this->id = id;
	this->parent = parent;
	this->root = root;
	this->direction = direction;
	this->x = x;
	this->y = y;
}
