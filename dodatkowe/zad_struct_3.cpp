#include <iostream>
#include <string>

struct car
{
   
    std::string marka;
    std::string model;
    int rok_produkcji;
    int przebieg;
    int cena_wyjsciowa;
    int cena_koncowa;
    void set_price(int a);
    void set_fin_price();
    car(std::string a,std::string b, int x,int y);
};
car::car(std::string a,std::string b, int x,int y)
{
    marka = a;
    model = b;
    rok_produkcji = x;
    przebieg = y;
}

void car::set_price(int a)
{
    cena_wyjsciowa = a;
}
void car::set_fin_price()
{
    cena_koncowa = (cena_wyjsciowa - 10000*(2022 -rok_produkcji)- 3*przebieg);
}
int main()
{
    car honda {"Honda","NSX",2020,80000}, toyota {"Toyota","Supra",2021,30000}, mazda {"Mazda", "RX-7", 1998, 40000};
    honda.set_price(260000);
    toyota.set_price(340000);
    mazda.set_price(400000);
    std::cout<< mazda.cena_wyjsciowa<<" "<<toyota.cena_wyjsciowa<<" "<< honda.cena_wyjsciowa<<"\n";

    honda.set_fin_price(); //0
    toyota.set_fin_price();//240000
    mazda.set_fin_price();

    std::cout<< mazda.cena_koncowa<<" "<<toyota.cena_koncowa<<" "<< honda.cena_koncowa;
}