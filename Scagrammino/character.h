#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include "weapon.h"

class character {
private:
	std::string name;
	std::unordered_map<std::string, weapon> armory;
	unsigned short int initiative;
	weapon* selected_Primary_Weapon;
	weapon* selected_Secondary_Weapon;

public:
	/**
	Costruttore della classe.
	Imposta nome e iniziativa relativa al personaggio

	@param name nome del personaggio
	@param initiative valore di iniziativa del personaggio
	*/
	character (std::string name, 
			   unsigned short int initiative);
	~character ();
	/**
	Restituisce l'iniziativa associata al personaggio

	@return valore di iniziativa
	*/
	unsigned short int get_initiative ();
	/**
	Restituisce il nome del personaggio

	@return nome pg
	*/
	std::string get_name ();
	/**
	Aggiunge un'arma nell'inventario di tale personaggio

	@param weapon arma da aggiungere
	*/
	void add_weapon_to_armory (weapon weapon);
	/**
	Rimuove un'arma dall'inventario di tale personaggio

	@param weapon arma da rimuovere
	*/
	void remove_weapon_from_armory (std::string weapon_Name);
	/**
	Restituisce i nomi delle armi (se presenti) nell'ecquipaggiamento del personaggio

	@return vettore di nomi delle relative alle armi possedute
	*/
	std::vector<std::string> get_vector_of_weapons ();
	/**
	ricava l'oggetto riferito ad una particolare arma (tra quelle 
	presenti nell'equipaggiamento del personaggio)

	@param weapon_Name nome relativo all'arma da ricavare
	@return l'oggetto di classe "weapon" associato al nome passato in parametro
	*/
	weapon get_weapon_from_armory (std::string weapon_Name);
	/**
	imposta come arma primaria (o, eventualmente, come unica arma)
	quello passato in parametro (sempre se è presente nell'equipaggiamento).

	@param weapon_Name nome dell'arma da impostare come arma primaria
	*/
	void set_primary_weapon (std::string weapon_Name);
	/**
	imposta come arma quello passato in parametro (sempre se è presente nell'equipaggiamento).

	@param weapon_Name nome dell'arma da impostare come arma secondaria
	*/
	void set_secondary_weapon (std::string weapon_Name);
	/**
	Ricava il nome relativo all'arma primaria impugnata dal personaggio

	@return nome dell'arma
	*/
	std::string get_primary_weapon (std::string weapon_Name);
	/**
	Ricava il nome relativo all'arma secondaria impugnata dal personaggio

	@return nome dell'arma
	*/
	std::string get_secondary_weapon (std::string weapon_Name);
};

