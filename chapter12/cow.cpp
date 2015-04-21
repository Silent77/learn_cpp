#include <iostream>
#include <cstring>
#include "cow.h"

using std::cout;
using std::endl;

Cow::Cow()
{
    weight=0.0;
    hobby=new char[1];
    name[0]='\0';
    hobby[0]='\0';
    cout<<"Empty cow was created"<<endl;
}
Cow::Cow(const char* nm, const char* ho, double wt)
{
    weight=wt;
    // Just copy string to array
    std::strncpy(name,nm,sizeof(name)-1);
    name[19]='\0';  // may be not nedded???
    hobby=new char[strlen(ho)+1];
    std::strcpy(hobby,ho);
    cout<<"Cow was created"<<endl;    
}
Cow::Cow(const Cow & c)
{
    weight=c.weight;
    std::strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    std::strcpy(hobby,c.hobby);
    cout<<"Cow was created by copy constructor"<<endl;    
}
Cow::~Cow()
{
    cout<<"Cow was deleted"<<endl;
    delete[] hobby;
}

Cow & Cow::operator =(const Cow& c)
{
    if (&c==this)
        return *this;
    delete hobby;
    weight=c.weight;
    std::strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    std::strcpy(hobby,c.hobby);    
    cout<<"Cow was copied by operator"<<endl;    
    return *this;        
}
        
void Cow::ShowCow() const
{
    cout<<"Name:"<<name<<endl
        <<"Hobby:"<<hobby<<endl
        <<"Weight:"<<weight<<endl;    
}
