#include "pch.h"
#include "weapon.h"


weapon::weapon (std::string name, 
				weapon_type type, 
				unsigned short int modifier, 
				dice dice_Damage) {
	this->name.assign (name);
	this->modifier = modifier;
	this->type = type;
	this->dice_Damage = &dice_Damage;
}


weapon::~weapon () {
	delete(&name);
	delete(&modifier);
	delete(&type);
	delete(&dice_Damage);
}

std::string weapon::get_weapon_name () {
	return name;
}

weapon_type weapon::get_weapon_type () {
	return type;
}

unsigned short int weapon::get_weapon_modifier () {
	return modifier;
}

dice weapon::get_dice_damage () {
	return *dice_Damage;
}
