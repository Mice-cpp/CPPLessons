﻿// pointer_table_dynamic.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    
    std::cout << "Hello there!\n";

    using namespace std;

    unsigned int* tab; 

    tab = new unsigned int [3];


    cout << "Entering tables values .." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Give a value of element number " << i << " -> ";
        cin >> tab[i];
        cout << endl;
    }

    int size_tab;
    size_tab = 3;

    cout << "Size of table tab is " << size_tab << endl;
    cout << "\n";

    cout << "Showing values of dynamic allocated table \n";
  
   
    for (int i = 0; i < size_tab; i++)
    {
        cout << "Value of dymanic allocated table - element " << i;
        cout << " is " << tab[i] << " ";
        cout << " adress by pointer " << (tab + i);
        cout << " ,adress of this table element is (hex) " << &tab[i];
        cout << "  (dec) " << (unsigned int) &tab[i] << "\n";
        
    }
// delete [] tab;


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