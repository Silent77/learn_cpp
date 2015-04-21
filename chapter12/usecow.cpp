/* 
 * File:   usecow.cpp
 * Author: tarnavskiyya
 *
 * Created on 21 квітня 2015, 12:48
 */

#include <cstdlib>
#include <iostream>
#include "cow.h"

using namespace std;

/*
 * 
 */
void ShowCow(Cow & cow);

int main(int argc, char** argv) {
    Cow * pcow1=new Cow("Mona Lisa1234567890!?","milkZAQWSXCDERFVBGTYHNMJUIKLOP",5.5);
    Cow cow2=Cow();
    cout<<"Here is cow1:"<<endl;
    pcow1->ShowCow();
    cout<<"Here is cow2:"<<endl;
    cow2.ShowCow();
    cow2=*pcow1;
    delete pcow1;
    cout<<"Here is cow2:"<<endl;
    cow2.ShowCow();
    
    ShowCow(cow2);
    return 0;
}

void ShowCow(Cow & cow)
{
    cow.ShowCow();
}