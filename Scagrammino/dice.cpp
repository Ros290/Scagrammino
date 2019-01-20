#include "pch.h"
#include "dice.h"
#include <stdlib.h>

dice::dice (unsigned short int sides) {
	this->sides = sides;
}

unsigned short int dice::get_number_of_sides () {
	return sides;
}

unsigned short int dice::roll () {
	return rand () % sides + 1;
}

dice::~dice () {
	delete(&sides);
}
