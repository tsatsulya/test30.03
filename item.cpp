#include "game.h"

item::item(std::string new_item_name) {
	name = new_item_name;
}
void item::add_action(action* new_action) {
	action_count++;
	actions.push_back(new_action);
}

void item::show_actions() {
	for(const auto& action: actions) 
    	std::cout << action->get_name() << "\n";
}

bool item::take_action(std::string action_to_perform) {

	for(const auto& action: actions) 
    	if (action->get_name() == action_to_perform) {
			action->perform();
			return 1;
		}
	return 0;
	// if (!action_exist) 
	// 	std::cout << "hmm... are you sure that you can do it with " << name << "?\n";
}