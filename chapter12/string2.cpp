#include <cstring>
#include "string2.h"

using std::cin;
using std::cout;

// Static initialisation
int String::num_strings=0;
int String::HowMany()
{
    return num_strings;    
}

// Constructors
String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings++;   
}
String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}
String::String(const String& s)
{
    len = s.len;
    str = new char[s.len+1];
    std::strcpy(str,s);
    num_strings++;
}

String::~String()
{
    --num_strings;
    delete [] str;
}

String & String::operator =(const String & st)
{
    if (&st==this)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);    
    return *this;
}
 
String & String::operator =(const char* st)
{
    if (&st==this)
        return *this;
    delete[] str;
    len = strlen(st);
    str = new char[len+1];
    std::strcpy(str,st);    
    return *this;
}




