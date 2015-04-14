/* 
 * File:   exercise_7_8.cpp
 * Author: tarnavskiyya
 *
 * Created on 10 квітня 2015, 10:42
 */

#include <cstdlib>
#include <iostream>
using namespace std;

const int SLEN=30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int get_info (student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[],int n);
/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"Please enter the size of class:";
    int class_size;
    cin>>class_size;
    while (cin.get()!='\n')
        continue;
    student* ptr_stu=new student[class_size];
    int entered=get_info(ptr_stu,class_size);
    for (int i=0;i<entered;i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete[] ptr_stu;
    cout<<"Done!"<<endl;
    return 0;
}

int get_info (student pa[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"Student #"<<i+1<<endl;
        cout<<"Enter full name:";
        cin.getline(pa[i].fullname,SLEN);
        if (!pa[i].fullname) 
            break;
        cout<<"Enter hobby:";
        cin.getline(pa[i].hobby,SLEN);                
        cout<<"Enter ooplevel:";
        cin>>pa[i].ooplevel;        
        while(cin.get()!='\n')
            continue;
    }
    cout<<"You have entered "<<i<<" students."<<endl;
    return i;
}

void display1(student st)
{
    cout.width(16);
    cout<<"Full name:";
    cout<<st.fullname<<endl;
    cout.width(16);
    cout<<"Hobbye:";
    cout<<st.hobby<<endl;
    cout.width(16);
    cout<<"OOP level:";
    cout<<st.ooplevel<<endl;   
}

void display2(const student* ps)
{
    cout.width(16);
    cout<<"Full name:";
    cout<<ps->fullname<<endl;
    cout.width(16);
    cout<<"Hobbye:";
    cout<<ps->hobby<<endl;
    cout.width(16);
    cout<<"OOP level:";
    cout<<ps->ooplevel<<endl;   
}
void display3(const student pa[],int n)
{
    cout<<"Students:"<<endl;
    for (int i=0;i<n;i++)
        display1(pa[i]);
}



