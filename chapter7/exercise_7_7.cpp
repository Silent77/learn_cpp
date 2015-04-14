/* 
 * File:   exercise_7_7.cpp
 * Author: tarnavskiyya
 *
 * Created on 9 квітня 2015, 14:48
 */

#include <cstdlib>
#include <iostream>
using namespace std;

const int Max=5;
double* fill_array(double ar[],int limit);
void show_array(const double* begin, double* end);
void revalue(double r,double* begin, double* end);

int main(int argc, char** argv) {
    double properties[Max];
    double* end=fill_array(properties,Max);
    show_array(properties,end);
    double factor;
    cout<<"Enter the recalculation factor:";
    cin>>factor;
    revalue(factor,properties,end);
    show_array(properties,end);
    cout<<"Done!"<<endl;
    return 0;
}

double* fill_array(double ar[],int limit)
{
    double temp;
    int i;
    for (i=0;i<limit;i++)
    {
        cout<<"Enter value #"<<i+1<<": ";
        cin>>temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get()!='\n') continue;
            cout<<"Incorrect input. Process terminated."<<endl;
            break;
        }
        else
            if (temp<0)
                break;
        *(ar+i)=temp;
    }
    return ar+i;
}
void show_array(const double* begin,double* end)
{
    int i=0;
    for (const double* p=begin;p!=end;p++)
    {
        i++;
        cout<<"Element #"<<i<<": "<<*p<<endl;
    }
}
void revalue(double r,double* begin, double* end)
{
    for (double* p=begin;p!=end;p++)
        *p*=r;
}

