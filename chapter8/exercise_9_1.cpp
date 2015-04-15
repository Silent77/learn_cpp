/* 
 * File:   exercise_9_1.cpp
 * Author: tarnavskiyya
 *
 * Created on 15 квітня 2015, 12:28
 */

#include <cstdlib>
#include <iostream>
#include "golf.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int golf_num=3;
    golf arr[golf_num];
    int i=0;
    golf g;
    while (i<golf_num && setgolf(g))
    {
        arr[i++]=g;
    }
    golf_num=i;
    
    for (int i=0;i<golf_num;i++)
    {
        cout<<"Player #"<<i+1<<std::endl;
        showgolf(arr[i]);
    }
        
    return 0;
}

