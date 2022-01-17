#include <string>
#include <iostream>

int count_chars(std::string wej, char lit)
{
    int char_n = 0;
    for(int i = 0; i < wej.size(); i++)
    {
        if(wej.at(i) == lit)
        {
            char_n++;
        }
    }
    return char_n;
}

int main()
{
    std::string test= "test";
    std::cout <<"t: "<<count_chars(test,'t') << "\ne: " << count_chars(test,'e') << "\ns: " << count_chars(test,'s');
    return 0;
}