#pragma once
#include "head.hpp"

// finish

class Player
{
	private:
		Proteins		proteins;
		int				organCount;
		vector<Organ>	organs;

	public:
		// structor
		Player();
		~Player();

		// getter
		Proteins	&getProteins();
		int			getOrganCount() const;
		Organ		&getOrgan(int index);

		// setter
		void setProteins(Proteins proteins);
		void setOrganCount(int organCount);
		void addOrgan(Organ organ);

		// member functions
		void findNearestProtein(int x, int y, TilePos &pos);
};
