/* 
 * File:   exercise_8_7.cpp
 * Author: tarnavskiyya
 *
 * Created on 15 квітня 2015, 10:25
 */

#include <cstdlib>
#include <iostream>

template <typename T> int ShowArray (T arr[], int n);
template <typename T> double ShowArray (T* arr[], int n);

struct debts
{
    char name[50];
    double ammount;
};

/*
 * 
 */
int main(int argc, char** argv) {
    using namespace std;
    int things[6]={13,31,103,301,310,130};
    debts mr_E[3]={
        {"Ima Wolfe",2400.0},
        {"Ura Foxe",1300.0},
        {"Iby Stout",1800.0}
    };
    double* pd[3];
    for (int i=0;i<3;i++)
        pd[i]=&mr_E[i].ammount;
    cout<<"The total value of things of sitizen E.:"<<ShowArray(things,6)<<endl;
    
    cout<<"The sum of debts of sitizen E.:"<<ShowArray(pd,3)<<endl;    
    return 0;
}

template <typename T> int ShowArray (T arr[], int n)
{
    using namespace std;
    int sum=0;
    cout<<"Template A\n";
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
template <typename T> double ShowArray (T* arr[], int n)
{
    using namespace std;
    double sum=0;
    cout<<"Template B\n";
    for(int i=0;i<n;i++)
        sum+=*arr[i];
    return sum;
}


