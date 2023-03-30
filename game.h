#pragma once

#include <iostream>
#include <vector>
#include <string>

class room;


class game {
protected:
	int room_count;
	std::vector<room*> rooms;
	bool add_username();
	int room_level = 0;

public:
	std::string username;
	room* actual_location;
	std::vector<room*> path;
	bool add_room(room*);
	bool delete_game();
	void create_game();

};


class action {
protected:
	std::string name;
	std::string description;
	std::string impossibility_explanation;
	int repetition_possibility;

public:
	action() {};
	action(std::string new_name, std::string action_description, int action_repetition_possibility, 
		   std::string action_impossibility_explanation) {
		name = new_name;
		description = action_description;
		repetition_possibility = action_repetition_possibility;
		impossibility_explanation = action_impossibility_explanation;
	};

	~action() {};

	void perform();

	std::string get_name() { return name; };
};


class item {
protected:
	std::string name;
	int action_count;
	std::vector<action*> actions; 
	std::string description;
public:
	item();
	item(std::string);
	~item();
	std::string get_name() {return name;};
	void add_action(action*); //<--- argument???
	bool take_action(std::string); //<---- argument?
	bool delete_action();
	void show_actions();
};


class room {
protected:
	std::string name;
	int item_count;
	int action_count = 2;
	std::vector<item*> items;
	std::vector<room*> rooms;
	std::vector<action*> actions;
public:
	int room_count;

	room() {name = "undefined";};
	room(std::string);
	std::string get_name() { return name; };
	void add_action(action*);
	void add_room(room*);

	void come_in() {actions[0]->perform();};
	void come_out() {actions[1]->perform();};
	
	bool add_item(item*);
	bool delete_item(item*);
	void show_actions();
	void show_rooms();
	void show_items();
};


