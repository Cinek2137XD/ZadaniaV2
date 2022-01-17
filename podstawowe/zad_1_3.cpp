#include <string>
#include<iostream>

int main()
{
    std::string f_name, m_name;
    std::cout<< "Podaj prosze pierwsze imie.\n";
    std::cin >> f_name;
    std::cout << "Podaj prosze drugie imie.\n";
    std::cin >> m_name;
    if(f_name.size() > m_name.size())
    {
        std::cout << "Pierwsze jest dluzsze!\n";
    }
    else if(f_name.size()< m_name.size())
    {
        std::cout << "Drugie jest dluzsze...\n";
    }
    else
    {
        std::cout << "Sa takiej samej dlugosci.\n";
    }
    return 0;

}