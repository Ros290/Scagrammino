#pragma once

class dice {
private:
	unsigned short int sides;
public:
	/**
	Costruttore dell'oggetto.
	Definisce quante facce (sides) deve possedere l'oggetto "dado"

	@param sides intero positivo che indica il numero di facce
	*/
	dice (unsigned short int sides);
	/**
	Restituisce il numero di facce del dado

	@return numero di facce
	*/
	unsigned short int get_number_of_sides ();
	/**
	Simula il "lancio" del dado

	@return risultato del lancio del dado
	*/
	unsigned short int roll ();
	~dice ();
};

