
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



enum e_way
{
	NORTH,
	EAST,
	SOUTH,
	WEST,
	X
};

enum e_mapPart
{
	WALL,
	ROOT,
	BASIC,
	TENTACLE,
	HARVESTER,
	SPORER,
	A,
	B,
	C,
	D
};


class Map
{
	private:
		int							_width;
		int							_height;
		vector<vector<e_mapPart>>	_map;
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
		void setMapPart(int x, int y, e_mapPart part);
};


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


class Basic : public Organ
{
	private:
};


class Proteins
{
	public:
		int a;
		int b;
		int c;
		int d;
};


class Player
{
	private:
		Proteins		proteins;
		int				organCount;
		vector<Organ>	organs;
};


class Game
{
	private:
		Map		_map;
		Player	_player;
		Player	_enemy;
	public:
		Game();
		~Game();
};



Game::Game()
{

}


Map::Map()
{
	cin >> _width >> _height;
	_map.resize(_width);
	for (int i = 0; i < _width; i++)
	{
		_map[i].resize(_height);
	}
}

Map::~Map()
{

}

void Map::setMapPart(int x, int y, e_mapPart part)
{
	_map[x][y] = part;
}





/**
 * Grow and multiply your organisms to end up larger than your opponent.
 **/

int main()
{
    Map map();
    // game loop
    while (1) {
        int entity_count;
        cin >> entity_count; cin.ignore();
        for (int i = 0; i < entity_count; i++) {
            int x;
            int y; // grid coordinate
            string type; // WALL, ROOT, BASIC, TENTACLE, HARVESTER, SPORER, A, B, C, D
            int owner; // 1 if your organ, 0 if enemy organ, -1 if neither
            int organ_id; // id of this entity if it's an organ, 0 otherwise
            string organ_dir; // N,E,S,W or X if not an organ
            int organ_parent_id;
            int organ_root_id;
            cin >> x >> y >> type >> owner >> organ_id >> organ_dir >> organ_parent_id >> organ_root_id; cin.ignore();
        }
        int my_a;
        int my_b;
        int my_c;
        int my_d; // your protein stock
        cin >> my_a >> my_b >> my_c >> my_d; cin.ignore();
        int opp_a;
        int opp_b;
        int opp_c;
        int opp_d; // opponent's protein stock
        cin >> opp_a >> opp_b >> opp_c >> opp_d; cin.ignore();
        int required_actions_count; // your number of organisms, output an action for each one in any order
        cin >> required_actions_count; cin.ignore();
        for (int i = 0; i < required_actions_count; i++) {

            // Write an action using cout. DON'T FORGET THE "<< endl"
            // To debug: cerr << "Debug messages..." << endl;

            cout << "WAIT" << endl;
        }
    }
}

