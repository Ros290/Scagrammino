#include "pch.h"
#include "character.h"


character::character (std::string name, 
					  unsigned short int initiative) {
	this->name.assign (name);
	this->initiative = initiative;
}


character::~character () {
	delete(selected_Primary_Weapon);
	delete(selected_Secondary_Weapon);
}

std::string character::get_name () {
	return name;
}

unsigned short int character::get_initiative () {
	return initiative;
}

void character::add_weapon_to_armory (weapon weapon) {
	armory.insert ({ weapon.get_weapon_name, weapon });
}

void character::remove_weapon_from_armory (std::string weapon_Name) {
	armory.erase (weapon_Name);
}

std::vector<std::string> character::get_vector_of_weapons () {
	std::vector<std::string> weapon_Vector;
	for (auto const& element : armory)
		weapon_Vector.push_back (element.first);
	return weapon_Vector;
}

weapon character::get_weapon_from_armory (std::string weapon_Name) {
	std::unordered_map<std::string, weapon>::const_iterator it = armory.find (weapon_Name);
	if (it != armory.end)
		return it->second;
}

void character::set_primary_weapon (std::string weapon_Name) {
	selected_Primary_Weapon = &character::get_weapon_from_armory (weapon_Name);
}

void character::set_secondary_weapon (std::string weapon_Name) {
	selected_Secondary_Weapon = &character::get_weapon_from_armory (weapon_Name);
}

std::string character::get_primary_weapon (std::string weapon_Name) {
	return selected_Primary_Weapon->get_weapon_name;
}

std::string character::get_secondary_weapon (std::string weapon_Name) {
	return selected_Secondary_Weapon->get_weapon_name;
}
