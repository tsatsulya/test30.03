#include "game.h"

room::room(std::string new_room_name) {
	std::cout << "Room "  << new_room_name << " was created!\n";
	action* cmin = new action("come in", "you coming in, you are welcome!", 100, "you're tired((");
	action* cmout = new action("come out", "yu coming out, good bye!!", 100, "you're tired((");

	actions = {cmin, cmout};
	name = new_room_name;
}

bool room::add_item(item *new_item) {
	item_count++;
	std::cout << new_item->get_name() << " has been added to " << name << "!\n";
	return 0;
} 

void room::show_actions() {
	for(const auto& action: actions) 
    	std::cout << action->get_name() << "\n";
}
void room::show_rooms() {
	for(const auto& room: rooms) 
    	std::cout << room->get_name() << "\n";
}

void room::add_action(action *new_action) {
	action_count++;
	actions.push_back(new_action);
}

void room::add_room(room *new_room) {
	room_count++;
	rooms.push_back(new_room);
}