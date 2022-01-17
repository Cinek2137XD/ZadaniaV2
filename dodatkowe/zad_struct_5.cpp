#include <iostream>
#include <string>
#include <vector>

using std::vector,std::string;

struct dict
{
    vector<string>slowa;
    void add_word(string in);
    void sub_word(string in);
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
            std::cout << "słownik już posiada takie słowo!\n";
        }
    }
    
    if(powt)
    {
        slowa.push_back(in);
    }
}
void dict::sub_word(string in)
{
    bool powt =false;
    for(int i =0; i<slowa.size();i++)
    {
        if (in == slowa[i])
        {
            slowa.erase(i);//nie działa chyba ale nie wiem
            powt = true;
        }  
    }
    if(powt)
    {
        std::cout << "słownik nie posiada takiego słowa!\n";
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
            slowa.erase(i);//nie działa chyba ale nie wiem
            powt = true;
        }  
    }
}
