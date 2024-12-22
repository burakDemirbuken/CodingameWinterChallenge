#include "head.hpp"

// finish

/**
 * Grow and multiply your organisms to end up larger than your opponent.
 **/


int main()
{
	Game	game;
	Game::map.startMap();
    // game loop
    while (1)
	{
		//game.resetMap();
        int entity_count;
        cin >> entity_count; cin.ignore();
		game.resetMap();
        for (int i = 0; i < entity_count; i++)
			game.setTile();
		int my_a, my_b, my_c, my_d; // your protein stock
        cin >> my_a >> my_b >> my_c >> my_d; cin.ignore();
        game.getPlayer().setProteins(Proteins(my_a, my_b, my_c, my_d));

		int opp_a, opp_b, opp_c, opp_d; // opponent's protein stock
		cin >> opp_a >> opp_b >> opp_c >> opp_d; cin.ignore();
        game.getEnemy().setProteins(Proteins(my_a, my_b, my_c, my_d));

		int required_actions_count; // your number of organisms, output an action for each one in any order
        cin >> required_actions_count; cin.ignore();

		cerr << "required_actions_count: " << required_actions_count << endl;
		// round
		for (int i = 0; i < required_actions_count; i++) {

            // Write an action using cout. DON'T FORGET THE "<< endl"
            // To debug: cerr << "Debug messages..." << endl;
			TilePos	pos(1, 2);
			game.getPlayer().findNearestProtein(1, 2, pos);
			cout << "GROW 1 " << pos.x << " " << pos.y << " BASIC" << endl;
            //cout << "WAIT" << endl;
        }
    }
}
/*
int main()
{
	Game	game;
	// game loop
	while (1) {
		game.resetMap();
		int entity_count;
		cin >> entity_count; cin.ignore();
		for (int i = 0; i < entity_count; i++)
			game.setTile();
		int my_a, my_b, my_c, my_d; // your protein stock
		cin >> my_a >> my_b >> my_c >> my_d; cin.ignore();
		game.getPlayer().setProteins(Proteins(my_a, my_b, my_c, my_d));

		int opp_a, opp_b, opp_c, opp_d; // opponent's protein stock
		cin >> opp_a >> opp_b >> opp_c >> opp_d; cin.ignore();
		game.getEnemy().setProteins(Proteins(opp_a, opp_b, opp_c, opp_d));

		int required_actions_count; // your number of organisms, output an action for each one in any order
		cin >> required_actions_count; cin.ignore();

		// round
		for (int i = 0; i < required_actions_count; i++)
		{

			// Write an action using cout. DON'T FORGET THE "<< endl"
			// To debug: cerr << "Debug messages..." << endl;
			TilePos	pos(0, 0);
			game.getPlayer().findNearestProtein(0, 0, pos);
			cout << "GROW 1 " << pos.x << " " << pos.y << " BASIC" << endl;
		}
	}
}
 */
