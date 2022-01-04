#include <iostream>
#include <string>
#include <vector>

struct group
{
    std::string nazwa;
    std::vector<std::string> studenci;
};

void add_to_group(std::string name, group* grupa)
{
    grupa->studenci.push_back(name);   
}
int main()
{
    std::vector<std::string> studen = {"Marcin", "Mateusz", "Hubert","Jakub"};
    group Grupa {"19c", studen};
    
    std::cout << Grupa.nazwa;
    for (int i = 0; i < Grupa.studenci.size(); i++)
    {
        std::cout << Grupa.studenci[i]<<"\n";
    }
    add_to_group("Piotr",&Grupa);
    for (int a = 0; a < Grupa.studenci.size(); a++)
    {
        std::cout << Grupa.studenci[a]<<"\n";
    }
    return 0;
}