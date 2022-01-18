#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using std::vector; using std::string;

struct dict
{
    vector<string>slowa;
    void add_word(string in);
    void rm_word(string in);
    void sch_word(string in);
    void print_all();
    void sort();
};

void dict::add_word(string in)
{
    bool powt = true;
    for(int i =0; i<slowa.size();i++)
    {
        if (in == slowa[i])
        {
            powt = false;
            std::cout << "slownik już posiada takie slowo!\n";
        }
    }
    
    if(powt)
    {
        slowa.push_back(in);
    }
}
void dict::rm_word(string in)
{
    bool powt =false;
    for(int i =0; i<slowa.size();i++)
    {
        if (in == slowa[i])
        {
            slowa.erase(slowa.begin()+i);
            powt = true;
        }  
    }
    if(powt)
    {
        std::cout << "slownik nie posiada takiego slowa!\n";
    }
}
void dict::print_all()
{
    for (int i = 0;i<slowa.size(); i++)
    {
        std::cout << slowa[i]<<"\n";
    }
}
void dict::sch_word(string in)
{
    for(int i =0; i<slowa.size();i++)
    {
        if (in == slowa[i])
        {
            std::cout << "Slowo znajduje sie na pozycji: "<<i<<"\n";
            break;
        }  
    }
}
void menu()
{
    using std::cout;
    system("cls");
    cout<<"-----------------------------------------------------------\n\n";
    cout<<"              Witaj w slowniku                             \n\n";
    cout<<"Operacje: \n";
    cout<<"1.Dodaj slowo\n\n2.Usun slowo\n\n3.Sortowanie(WIP)\n\n4.Wyswietl zawartosc\n\n5.Wyszukiwarka\n\n6.Wyjscie\n\n";
    cout<<"-----------------------------------------------------------\n";
}
void dict::sort()
{
    string op;
    vector<string>temp;
    for (int i = 0; i<slowa.size(); i++)
    {
        
    }
}
int main()
{
    dict slownik;
    bool status = true;
    string decyzja,a,b,c;
    while(status)
    {
        menu();
        std::cin >>decyzja;
        switch (stoi(decyzja))
        {
        case 1:
            system("cls");
            std::cout << "Podaj slowo jakie chcesz dodac: ";
            std::cin >> a;
            slownik.add_word(a);
            system("pause");
            break;
        case 2:
            system("cls");
            std::cout << "Podaj slowo do usuniecia: ";
            std::cin >> a;
            slownik.rm_word(a);
            system("pause");
            break;
        case 3:

        case 4:
            system("cls");
            slownik.print_all();
            system("pause");
            break;
        case 5:
            system("cls");
            std::cout << "Jakie slowo chcesz wyszukac?\n";
            std::cin >> a;
            slownik.sch_word(a);
            system("pause");
            break;
        case 6:
            status = false;
            break;
        default:
            break;
        }
    }
    return 0;
}
