// lista3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "table.h"
#include "procedures.h"

#include <iostream>

using namespace std;

int main() {
	
	Table t0, t1;

	t0.setNewSize(6);
	t1.setNewSize(4);

	for (int i = 0; i < 6; i++) {
		t0.setValueAt(i, i + 1);
	}
	for (int i = 0; i < 4; i++) {
		t1.setValueAt(i, i + 51);
	}

	t1.setValueAt(2, 123);
	t0.showTable();
	t1.showTable();

	Table t3 = t0 + t1;
	t3.showTable();

	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
