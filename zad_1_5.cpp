#include <iostream>
#include <string>

bool is_even(int a)
{
    if((a%2) == 0)
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
    int liczba;
    while(true)
    {
        std::cin >> liczba;
        if(is_even(liczba))
        {
            std::cout << "Even\n";
        }
        else
        {
            std::cout << "Uneven\n";
        }
    }
    return 0;
}