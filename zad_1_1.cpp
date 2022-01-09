#include <iostream>
#include <vector>

bool czypierwsza(int a)
{
    bool czy_pierwsza = true;
    if (a == 0 || a == 1)
    {
        czy_pierwsza = false;
    }
    else
    {
        for (int i = 2; i <= a / 2; ++i)
        {
            if (a % i == 0) 
            {
                czy_pierwsza = false;
            }
        }
    }
    return czy_pierwsza;    
}

int main()
{
    bool pierwsza;
    std::vector<int> pierwsze;
    std::string wyjscie;
    

    for (int i = 2; i<=20; i++)
    {
        pierwsza = czypierwsza(i);
        if(pierwsza)
        {
            pierwsze.push_back(i);
        }      
    }
    for(int y = 0; y< 2; y++)
    {
        for(int x = 0; x < pierwsze.size();x++ )
        {
            std::cout <<pierwsze[x] <<" ";
        }
        std::cout << "\n";
    }
    std::cout << wyjscie <<"\n";
    return 0;
}