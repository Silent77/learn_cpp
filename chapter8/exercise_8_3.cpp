/* 
 * File:   exercise_8_3.cpp
 * Author: tarnavskiyya
 *
 * Created on 14 квітня 2015, 10:03
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void upperstring(string&);
/*
 * 
 */
int main(int argc, char** argv) {
    string s;
    cout<<"Enter strings (empty string - END):"<<endl;
    while (getline(cin,s) && (s!=""))
    {
        upperstring(s);
        cout<<s<<endl;
    }        
    return 0;
}

void upperstring(string& s)
{
    int l=s.length();
    for (int i=0;i<l;i++)
        s[i]=toupper(s[i]);
}
