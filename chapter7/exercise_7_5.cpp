/* 
 * File:   exercise_7_5.cpp
 * Author: tarnavskiyya
 *
 * Created on 8 квітня 2015, 12:43
 */

#include <cstdlib>
#include <iostream>

using namespace std;

unsigned long fact(int);
/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    cout<<"Enter number (non NUM key - exit):";
    while (cin>>num) cout<<"Factorial : "<<fact(num)<<endl;
    return 0;
}

unsigned long fact(int n)
{
    if (n>1) 
        return n*fact(n-1);
    else
        return 1;
}

