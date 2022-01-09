#include <iostream>
#include <string>
#include <vector>

bool contains_all(std::vector<int>& dUpa, std::vector<int>& kys)
{
    int testowana;
    std::vector<int> ok;
    for(int i = 0; i < dUpa.size(); i++)
    {
        for(int x = 0; x < kys.size(); x++)
        {            
            if(dUpa[i] == kys[x])
            {
                ok.push_back(kys[x]);
            }
        }
    }
    if(dUpa.size() == ok.size())
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
    std::vector<int> a {1,2,3,3,4,4,1,2}, b {1,2,3,4};
    if(contains_all(a,b))
    {
        std::cout << "Zawiera";
    }
    else
    {
        std::cout << "Nie zawiera";
    }
    return 0;
}

