/* 
 * File:   exercise_7_9.cpp
 * Author: tarnavskiyya
 *
 * Created on 10 квітня 2015, 12:31
 */

#include <cstdlib>
#include <iostream>

using namespace std;

double calculate(double x, double y, double (*fn)(double,double));
double mult1(double,double);
double mult2(double,double);
double mult3(double,double);
/*
 * 
 */
int main(int argc, char** argv) {
    const int FN_NUM=3;
    double (*pf[FN_NUM])(double,double)={mult1,mult2,mult3};
    double x,y;
    cout<<"Enter 2 numbers:"<<endl;
    
    while (cin>>x>>y)
    {
        for (int i=0;i<FN_NUM;i++)
            cout<<"Result by function #"<<i+1<<": "<<calculate(x,y,pf[i])<<endl;
    }
    return 0;
}

double calculate(double x, double y, double (*fn)(double,double))
{
    return fn(x,y);
}

double mult1(double x, double y)
{
    return x*y;
}

double mult2(double x, double y)
{
    return (x+y)*x*y;
}

double mult3(double x, double y)
{
    return x*x+y*y;
}
