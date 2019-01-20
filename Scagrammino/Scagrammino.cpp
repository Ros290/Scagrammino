// Scagrammino.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include "pch.h"
#include <iostream>
#include <map>
#include "character.h"
#define d4 dice(4)
#define d6 dice(6)
#define d8 dice(8)
#define d10 dice(10)
#define d12 dice(12)
#define d20 dice(20)


//TODO: creare la classe apposita per gestire i pg

int main () {
	//std::cout << "Hello World!\n";
	std::string name;
	unsigned short int initiative;
	struct comparator_characters {
		bool operator()(const character& c1, 
						const character& c2) const {
			return c1.get_initiative < c2.get_initiative;
		}
	};
	std::map <std::string, 
		character, 
		comparator_characters> map_Characters;
	unsigned short int choice;
	while (choice != 0) {
		std::cout << "Insert command:\n\n";
		std::cout << "1 : create Character\n";
		std::cout << "2 : remove Character\n";
		std::cout << "3 : add Weapon to Character";
		std::cout << "4 : roll attack for Character";

		std::cin >> choice;
		switch (choice) {
		case 1:

			std::cout << "Insert character name and Initiative value. Then press Enter:\n";
			std::cin >> name;
			std::cin >> initiative;
			map_Characters.insert ({ name, 
								   character (name, initiative) });
			break;

		case 2:
			std::cout << "Characters:\n\n";

			std::cout << "Insert character Name to Erase. Then press Enter:\n";
			std::cin >> name;
			break;
		}
	}

	std::string show_characters () {
		std::string result = "";
		for (auto const& element : map_Characters)
			result += element.second.get_name;
		return result;
	};
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
