#include <iostream>
#include <vector>
#include <string>



double average_of(std::vector<int> wow)
{
    int suma;
    double wynik;

    for(int i=0; i < wow.size(); i++)
    {
        suma += wow[i];
    }
    wynik = suma / wow.size();
    return wynik;
}


int main()
{
    std::vector <int> liczby = {1,2,3,4};
    std::cout << average_of(liczby);
    return 0;
}