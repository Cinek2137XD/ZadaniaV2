#include <iostream>

auto czypierwsza(int a) ->bool
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
                break;
            }
        }
    }
}

auto main()
{
    bool pierwsza;
    i pierwsze[10];
    int iter_pierwsze = 0;
    std iter_druk;
    std::string wyjscie;
    

    for (int i = 2; i>=20; i++)
    {
        pierwsza = czypierwsza(i);
        if(pierwsza)
        {
            iter_pierwsze++;
            pierwsze[iter_pierwsze] = i;
        }      
    }
    while(iter_pierwsze > 0, iter_pierwsze--)
    {
        wyjscie + " " + to_string(pierwsze[iter_pierwsze]);
    }  
}