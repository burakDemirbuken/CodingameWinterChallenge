#pragma once
#include "head.hpp"

// finish

class Organ
{
	private:
		int		proteinCost;
		int		id;
		Organ	*parent;
		Organ	*root;
		e_way	direaction;
		int		x;
		int		y;
};
