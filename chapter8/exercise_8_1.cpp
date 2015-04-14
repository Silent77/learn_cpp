/* 
 * File:   exercise_8_1.cpp
 * Author: tarnavskiyya
 *
 * Created on 10 квітня 2015, 15:26
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void prn_str(char * s, unsigned i=1);

int main(int argc, char** argv) {
    char* s="hi!!!";
    prn_str(s);
    prn_str(s);
    prn_str(s,5);
    prn_str(s,5);
    prn_str(s,5);
    prn_str(s,5);
    return 0;
}

void prn_str(char * s, unsigned num)
{
    static int total_calls=0;
    if (num>1)
        for (int i=0;i<total_calls;i++)
            cout<<s<<endl;
    else
        cout<<s<<endl;
    cout<<endl;
    total_calls++;
}

