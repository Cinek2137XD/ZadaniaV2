#include <string>
#include <iostream>

auto is_palindrome(std::string palindrome) -> bool
{
    for (int i=1;i<=palindrome.size(); i++)
    {
        if(palindrome[i-1] != palindrome[palindrome.size() - i])
        {
            return false;
        }
    }
    return true;
}
