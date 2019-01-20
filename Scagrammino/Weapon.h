#pragma once
#include <string>
#include "dice.h"
enum weapon_type { MELEE, DISTANCE };

class weapon {
private:
	std::string name;
	unsigned short int modifier;
	dice dice_Damage;
	weapon_type type;

public:
	/**
	Istanzia un oggetto "arma"

	@param name nome dell'arma
	@param modifier valore da sommare assieme al risultato dell'attacco e danno
	@param dice_Damage il dado utilizzato per calcolare il danno
	*/
	weapon (std::string name, weapon_type type, unsigned short int modifier, dice dice_Damage);
	~weapon ();
	/**
	Ritorna il nome dell'arma
	*/
	std::string get_weapon_name ();
	/**
	Indica il tipo di arma
	@param MELEE (a contatto) o DISTANCE (a distanza)
	*/
	weapon_type get_weapon_type ();
	/**
	Ritorna il modificatore da sommare ai tiri per colpire / danni
	*/
	unsigned short int get_weapon_modifier ();
	/**
	Ritorna il dado associato al danno che provoca l'arma
	*/
	dice get_dice_damage ();
};
