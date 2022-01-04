#include <iostream>
#include <vector>
#include <string>

struct student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
    double average_of();
    
};

double student::average_of()
{
    int suma = 0;
    double wynik;

    for(int i=0; i < oceny.size(); i++)
    {
        suma += oceny[i];
    }
    wynik = suma / (double)oceny.size();
    return wynik;
}

student* get_best_student(std::vector<student>* wejscie)
{
    student* wyjscie = &wejscie->at(0);
    for (int i = 0; i < wejscie->size(); i++)
    {
        if(wejscie->at(i).average_of() > wyjscie->average_of())
        {
            wyjscie = &wejscie->at(i);
        }
    }
    return wyjscie;
}


int main()
{
    student* najlepszy;
    student olek {"Aleksander", "Kaczorowski",{2,3,4}}, kon {"Bartek","Konix",{4,5,4}};
    std::vector<student> v={olek,kon};

    najlepszy = get_best_student(&v);
    std::cout << najlepszy->imie << najlepszy ->average_of()<< "\n";

    return 0;
}