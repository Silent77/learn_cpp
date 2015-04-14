/* 
 * File:   exercise_7_6.cpp
 * Author: tarnavskiyya
 *
 * Created on 9 квітня 2015, 12:00
 */

#include <cstdlib>
#include <iostream>

using namespace std;
const unsigned MAX_AR=10;
unsigned Fill_array(double*,int);
void Show_array(const double*,const int);
void Reverse_array(double*,const int);
/*
 * 
 */
int main(int argc, char** argv) {
    double ar[MAX_AR];
    int count=Fill_array(ar,MAX_AR);    
    cout<<"Entered array:"<<endl;
    Show_array(ar,count);
    Reverse_array(ar,count);
    cout<<"Reversed array excluding first and last elements:"<<endl;    
    Show_array(ar,count);
    return 0;
}
unsigned Fill_array(double* ar,int num)
{
    int i;
    double d;
    for (i=0;i<num;i++)
    {
        cout<<"Enter element #"<<i+1<<":";
        if (!(cin>>d)) break;
        ar[i]=d;
    }
    return i;
}
void Show_array(const double* ar,const int num)
{
    for (int i=0;i<num;i++) 
        cout<<"Element #"<<i+1<<": "<<*(ar+i)<<endl;
}
void Reverse_array(double* ar,const int num)
{
    double temp;
    int middle=num/2;
    for (int i=0;i<middle;i++)
    {
        temp=ar[i];
        ar[i]=ar[num-i-1];
        ar[num-i-1]=temp;
    }
}




