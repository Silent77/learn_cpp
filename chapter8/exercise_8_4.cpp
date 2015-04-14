/* 
 * File:   exercise_8_4.cpp
 * Author: tarnavskiyya
 *
 * Created on 14 квітня 2015, 11:10
 */

#include <cstdlib>
#include <cstring>
#include <iostream>
struct stringy
{
    char *str;
    int ch;
};
void set(stringy&,const char*);
void show(const stringy&, const int n=1);
void show(const char*, const int n=1);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char testing[]="Reality is not that you see";
    stringy beany;
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show(testing,3);
    return 0;
}
void set(stringy& s,const char* ch)
{
    int l=strlen(ch);
    s.str=new char[l+1];
    strcpy(s.str,ch);
    s.ch=l;
}
void show(const stringy& s, const int n)
{
    for (int i=0;i<n;i++)
        cout<<s.str<<" ("<<s.ch<<")"
                <<endl;
}
void show(const char* s, const int n)
{
    for (int i=0;i<n;i++)
        cout<<s<<endl;
}

