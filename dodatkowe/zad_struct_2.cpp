#include <iostream>
#include <string>
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
#include <vector>

int main(int argc,char* argv[])
{
    int losowa,trafione;
    std::vector<char> match;
    srand(time(NULL));
    for(int i = 0; i>argc; i++)
    {
        losowa = rand() % 10+1;
        if (losowa == std::stoi(argv[i]))
        {
            trafione++;
            match.push_back(losowa);
        }
        
    }
    return 0;
}