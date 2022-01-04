#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(std::string wejscie)
{
    char spacja =' ';
    std::vector<std::string> slowa;
    std::string do_vec;
    for (int i = 0; i < wejscie.size(); i++)
    {
        if(wejscie.at(i) != spacja)
        {
            do_vec += wejscie.at(i);
        }
        else if(do_vec.size()>= 0)
        {
            slowa.push_back(do_vec);
            do_vec ="";
        }
    }
    slowa.push_back(do_vec);
    return slowa;
}

int main()
{
    std::string tekst = "test programu  dwie spacje przed";
    std::vector<std::string> wyjscie = split(tekst);
    for (int i = 0; i < wyjscie.size(); i++)
    {
        std::cout<<wyjscie[i]<<" ";
    }
    return 0;
}