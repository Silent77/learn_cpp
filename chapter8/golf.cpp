#include <cstring>
#include <iostream>
#include "golf.h"

void setgolf(golf& g,const char* name, int hc)
{
    strncpy(g.fullname,name,Len-1);
    g.fullname[Len]='\n';
    g.handicap=hc;
}

int setgolf(golf& g)
{
    std::cout<<"Enter full name:";
    std::cin.getline(g.fullname,Len);
    if (!std::cin.good())
    {
        // сбросить состояние флагов для дальнейшего чтения
        std::cin.clear();
        // дочитать оставшиеся символы 
        while (!std::isspace(std::cin.get())) continue;
    }    
    if (!*g.fullname) return 0;
    std::cout<<"Enter the handycap:";
    std::cin>>g.handicap;
    std::cin.get();
    return 1;
}

void handicap(golf& g,int hc)
{
    g.handicap=hc;
}

void showgolf(const golf& g)
{
    //std::cout<<"Here is the Golf player:"<<std::endl;
    std::cout<<"Name:"<<g.fullname<<std::endl;
    std::cout<<"Handycap:"<<g.handicap<<std::endl;
}

