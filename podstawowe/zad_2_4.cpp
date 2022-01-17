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
    int suma;
    double wynik;

    for(int i=0; i < oceny.size(); i++)
    {
        suma += oceny[i];
    }
    wynik = suma / oceny.size();
    return wynik;
}
int main()
{
    std::vector <int> liczby = {3,5,4};
    student marcin {"Marcin", "Kukus", liczby};
    std::cout << marcin.average_of();
}