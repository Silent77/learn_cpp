/* 
 * File:   exercise_8_5.cpp
 * Author: tarnavskiyya
 *
 * Created on 14 квітня 2015, 11:44
 */

#include <cstdlib>
#include <iostream>

using namespace std;

template <class T> T max5(T[5]);
/*
 * 
 */
int main(int argc, char** argv) {
    double nums[]={4,0.7e+2,1,20,6};
    cout<<"max="<<max5(nums);
    return 0;
}

template <class T> T max5(T t[5])
{
    T max=t[0];
    for (int i=1;i<5;i++)
        if (max<t[i])
            max=t[i];
    return max;
}

