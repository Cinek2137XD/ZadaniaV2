#include <iostream>
#include <string>
#include <vector>

std::string pytanie()
{
    std::string zwrot;
    std::cout <<"Podaj imie: ";
    std::cin >> zwrot;
    return zwrot;
}
bool y_t(std::string wej)
{
    if(wej == "T")
    {
        return true;
    }
    else if(wej =="t")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::vector<std::string>imiona,f,m;

    for(int i = 0; i < 5; i++)
    {
        imiona.push_back(pytanie()); 
    }
    for(int i = 0; i<imiona.size(); i++)
    {
        if(imiona[i].back() == 'a')
        {
            f.push_back(imiona[i]);
        }
        else
        {
            m.push_back(imiona[i]);
        }
    }
    std::cout<<"ilosc pan: " <<f.size()<<"\n";
    std::cout<<"ilosc panow: "<<m.size()<<"\n";
    return 0;
}