#include <iostream>
#include <string>

bool is_divisible(int a,int b)
{
    if((a%b) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_even(int a)
{
    return is_divisible(a,2);
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