#include <iostream>
#include <vector>
#include <string>

int dot_product(std::vector<int> a, std::vector<int> b)
{
    int wyjscie;
    if(a.size() == b.size())
    {    
        for(int i = 0; i < a.size(); i++)
        {
            wyjscie += a[i]*b[i];
        }
    }
    else
    {
        std::cout << "Wektory nie są tej samej długości\n";
    }
    return wyjscie;
}
int main()
{
    std::vector<int> a = {1,2,3},b = {1,2,3};
    std::cout << dot_product(a,b);
    return 0;
}