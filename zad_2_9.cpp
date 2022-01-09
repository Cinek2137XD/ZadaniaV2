#include <iostream>
#include <string>
#include <vector>

bool contains_all(std::vector<int>&a, std::vector<int>& b)
{
    int testowana;
    std::vector<int> ok;
    for(int i = 0; i <a.size(); i++)
    {
        for(int x = 0; x < b.size(); x++)
        {            
            if(a[i] == b[x])
            {
                ok.push_back(b[x]);
            }
        }
    }
    if(a.size() == ok.size())
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

