#include "game.h"
#include <iostream>




bool game::add_room(room *new_room) {
	room_count++;
	rooms.push_back(new_room);
	return 0;
}

void game::create_game() {

	room* dormitory = new room("dormitory");

	actual_location = dormitory;
	
	room* room435 = new room("435");
	item* Chunya = new item("Chinchilla Chunya");
	item* Chester = new item("Chinchilla Chester");
	item* Varvara = new item("Varvara");
	item* Nastya = new item("Nastya");
	item* Aygul = new item("Aygul");

	action* pat  = new action("pat", "you pet him:3", 10, "He's tired :(");

	Chunya->add_action(pat);
	Chester->add_action(pat);
	Varvara->add_action(new action("start fighting", "you fight with Varbara and she wins", 1, "you're dead >:3"));
	Nastya->add_action(new action("start_talk", "Nastya hisses at you, don't distract her, she is BOTAET", 1, "you are skared"));
	Aygul->add_action(new action("say hello", "Aigul nodded disapprovingly and hinted to you that it was time for you to leave", 
					 1, "you already greeted"));

	room435->add_item(Chunya);
	room435->add_item(Chester);
	room435->add_item(Nastya);
	room435->add_item(Varvara);

	dormitory->add_room(room435);

	dormitory->add_action(new action("just walk", "you are walking. wow:/", 10000, "you're tired("));

	room* botalka = new room("BOTALKA");

	item* laptop = new item("laptop");
	laptop->add_action(new action("take laptop", "", 0, "you put your hands on the laptop.... Hey!!! It's not your >:("));

	botalka->add_action(new action("botat", "you are studying, it's cool", 1000, "you're tired("));

}