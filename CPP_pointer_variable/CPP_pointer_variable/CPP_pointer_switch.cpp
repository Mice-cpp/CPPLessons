// CPP_pointer_variable.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    using namespace std;
    cout << "Demonstration how to switch pointers to unsigned int variable \n";

    unsigned int uint;
    
    unsigned int* p1_uint;
    unsigned int* p2_uint;
    

    p1_uint = &uint;

    cout << "Enter value of uint variable uint ( pointer p1_uint ) -> ";
    cin >> *p1_uint;
    cout << "\n";

    cout << "Show variable through pointer p1_uint: ";
    cout << *p1_uint <<endl;
  
    cout << "Adress value in p1_uint ->" << p1_uint <<"\n";

    cout << "Switch pointer for variable uint to p2_uint"<<"\n";
    p2_uint = &uint;
    
    cout << "Adress value in p2_uint ->" << p2_uint << "\n";

    cout << "Show variable direct : ";
    cout << uint;



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
