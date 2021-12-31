#include <iostream>
#include <vector>
#include <string>

struct student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
    double average_of();
    student get_best_student(std::vector<std::string>);
};

double student::average_of()
{
    int suma;
    double wynik;

    for(int i=0; i < oceny.size(); i++)
    {
        suma += oceny[i];
    }
    wynik = suma / oceny.size();
    return wynik;
}

student student::get_best_student(std::vector<std::string> wejscie)
{
    std::string najlepszy;
    for (int i = 0; i < wejscie.size(); i++)
    {
        wejscie[i]

    }
    
}