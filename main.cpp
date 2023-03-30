#include <iostream>
#include "game.h"


std::string ask_name() {
	std::cout << "Please, tell me your name! if you don't tell me, just enter ""-"". I'll just call you FRIEND :3\n";

	std::string username;
	std::cin >> username;

	if (username == "-") {
		username = "FRIEND";
	}

	return username;
}

void start(game* new_game) {
	new_game->username = ask_name();
	std::cout << "ok, " << new_game->username << ", let's play...\n\n";
	std::cout << "So...on every turn you can enter the suggested rooms and you can interact with the objects around you. You will be presented with a list of options: to select one of them, enter its name in the console. Let's go!\n";
}
int main() {
	game* best_game_in_the_world = new game;
	best_game_in_the_world->create_game();
	start(best_game_in_the_world);
	std::string answer;
	while (true) {
		room* location = best_game_in_the_world->actual_location;

		if (location->room_count) {
			location->show_rooms();
			std::cout << "do you want to come in? y/n" << std::endl;
			std::cin >> answer;
		}
		
	}

	
	return 0;
}