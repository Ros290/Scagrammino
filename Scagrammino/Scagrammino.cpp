// Scagrammino.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include "pch.h"
#include <iostream>
#include "fight_manager.h"
#include "character.h"
#define d4 dice(4)
#define d6 dice(6)
#define d8 dice(8)
#define d10 dice(10)
#define d12 dice(12)
#define d20 dice(20)

int main () {
	std::string name;
	unsigned short int initiative;
	unsigned short int choice;
	fight_manager fm ("Esempio Scontro");
	while (choice != 0) {
		std::cout << "Insert command:\n\n";
		std::cout << "1 : create Character;\n";
		std::cout << "2 : remove Character;\n";
		std::cout << "3 : add Weapon to Character;\n";
		std::cout << "4 : roll attack for Character;\n";
		std::cout << "0 : exit.\n";

		std::cin >> choice;
		switch (choice) {
		case 1:

			std::cout << "Insert character name and Initiative value. Then press Enter:\n";
			std::cin >> name;
			std::cin >> initiative;
			fm.add_character (character ( name, initiative ));
			break;

		case 2:
			std::vector<std::string> characters_Vector;
			characters_Vector = fm.get_vector_of_characters_name();
			std::cout << "Characters:\n\n";
			for (const auto& elem_Vector : characters_Vector)
				std::cout << elem_Vector << ";\n";
			std::cout << "\nInsert character Name to Erase. Then press Enter:\n";
			std::cin >> name;
			fm.remove_character (name);
			break;
		}
	}
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
