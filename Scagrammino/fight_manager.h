#pragma once
#include "character.h"
#include <map>
struct comparator_characters {
	bool operator()(const character& c1,
					const character& c2) const {
		return c1.get_initiative() < c2.get_initiative();
	}
};
class fight_manager {
private:
	std::string name;
	std::map <std::string,
		character,
		comparator_characters> map_Characters;
public:
	fight_manager (std::string name);
	~fight_manager ();
	void add_character (character c);
	std::vector<std::string> get_vector_of_characters_name ();
	void remove_character (std::string name);
};

