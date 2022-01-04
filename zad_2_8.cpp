#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

struct student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
    double average_of();
    
};

struct group
{
    std::string nazwa;
    std::vector<student> studenci;
    double mediana();
};

double student::average_of() //średnia ocen studenta z zad 4
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

double group::mediana()//zwraca medianę grupy
{
    std::vector<double> srednie;
    for(student& student : studenci)
    {
        srednie.push_back(student.average_of());
    }
    if (srednie.size() == 0)
    {
        return 0;
    }
    else
    {
        sort(srednie.begin(), srednie.end());
        if (srednie.size() % 2 == 0)
        {
            return (srednie[srednie.size() / 2 - 1] + srednie[srednie.size() / 2]) / 2;
        }
        else 
        {
            return srednie[srednie.size() / 2];
        }
    }
}

std::string best_groups_name(std::vector<group>& in) //porównuje mediany grup
{
    group* koxy = &in[0];
    for(group& grupa : in)
    {
        if (grupa.mediana()>= koxy->mediana())
        {
            koxy = &grupa;
        }
    }
    return koxy->nazwa;
}

int main()
{
    student marcin {"Marcin", "Kukus", {2,3,4}}, 
    mateusz {"Mateusz","Placha",{3,4,4}}, 
    olek {"Aleksander", "Kaczorowski",{2,3,4}}, 
    kon {"Bartek","Konix",{4,5,4}};;
    std::vector<student>v {marcin,mateusz}, k {kon, olek};
    group c {"19c",v}, a{"10a",k};

    std::vector<group>b {c,a};

    std::cout<<best_groups_name(b);    
    return 0;
}