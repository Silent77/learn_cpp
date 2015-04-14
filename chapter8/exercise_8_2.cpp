/* 
 * File:   exercise_8_2.cpp
 * Author: tarnavskiyya
 *
 * Created on 14 квітня 2015, 9:45
 */

#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

struct CandyBar
{
    char name[32];
    double weight;
    unsigned int power;    
};

void set_candy(CandyBar&, const char* name="Millenium Munch",const double weight=2.85,const unsigned int power=320);
void show_candy(const CandyBar&);
/*
 * 
 */
int main(int argc, char** argv) {
    CandyBar myCandy;
    set_candy(myCandy);
    show_candy(myCandy);
    set_candy(myCandy,"Roshen",1.2,125);
    show_candy(myCandy);
    return 0;
}
void set_candy(CandyBar& candy, const char* name,const double weight,const unsigned int power)
{
    strcpy(candy.name,name);
    candy.power=power;
    candy.weight=weight;    
}

void show_candy(const CandyBar& candy)
{
    cout<<"Here is your candy:"<<endl;
    cout<<"Name:"<<candy.name<<endl<<
          "Weight:"<<candy.weight<<endl<<
          "Calories:"<<candy.power<<endl;  
}


