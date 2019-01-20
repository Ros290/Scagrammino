#include "pch.h"
#include "fight_manager.h"


fight_manager::fight_manager (std::string name) {
	this->name = name;
}


fight_manager::~fight_manager () {
}

void fight_manager::add_character(character c){
	map_Characters.insert ({ c.get_name(),c });
}

std::vector<std::string> fight_manager::get_vector_of_characters_name () {
	std::vector<std::string> characters_Vector;
	for (auto const& element : map_Characters)
		characters_Vector.push_back (element.second.get_name());
	return characters_Vector;
}

void fight_manager::remove_character (std::string name) {
	map_Characters.erase (name);
}