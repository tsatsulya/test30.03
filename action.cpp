#include "game.h"
void action::perform() {

	if (repetition_possibility <= 0) {
		std::cout << "im afraid you can't do this(((\n";
		std::cout << impossibility_explanation << std::endl;
	}

	std::cout << description << std::endl;
	repetition_possibility--;
}