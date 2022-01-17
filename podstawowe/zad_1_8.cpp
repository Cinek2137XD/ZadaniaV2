#include <iostream>
#include <string>
#include <vector>


using std::string,std::vector ;
vector<char> each_other(int n, string wej)
{
    vector<char>wyj;
    int podzielone = wej.size()/n;
    for(int i = 1; i<=podzielone;i++)
    {
        wyj.push_back(wej[(i*n)-1]); //działą ")"
    }
    return wyj;
}

int main()
{
    string a ="rabarbar";
    vector<char>podzielone = each_other(1,a);
    std::cout << podzielone.size() <<"\n";
    for(int i =0; i<podzielone.size(); i++)
    {
        std::cout << podzielone[i] <<"\n";
    }
    return 0;
}