/* 
 * File:   exercise_7.cpp
 * Author: tarnavskiyya
 *
 * Created on 8 квітня 2015, 11:16
 */

#include <iostream>

using namespace std;
const int MAX_RES=10;
// отображает результаты
void golf_display(const int[],int);
// возвращает количество введенных результатов в массив
int golf_get_res(int*);
// возвращает средний результат
int golf_avr(const int[],int);


int main(int argc, char** argv) {
    int golf_res[MAX_RES];
    int count=golf_get_res(golf_res);
    cout<<"You have entered "<<count<<" results."<<endl;
    golf_display(golf_res,count);
    cout<<"You average result:"<<golf_avr(golf_res,count)<<endl;
    return 0;
}
void golf_display(const int ar[],int count)
{
    cout<<"Here is the Golf results!"<<endl;
    for (int i=0;i<count;i++)
    {
        cout<<"Result #"<<i+1<<" "<<ar[i]<<endl;
    }
}
int golf_avr(const int* ar,int count)
{
    int sum=0;
    for (int i=0;i<count;i++)sum+=ar[i];
    if (count) 
        return sum/count;
    else
        return 0;
}
int golf_get_res(int* ar)
{
    int res;
    int i;
    for (i=0;i<MAX_RES;i++)
    {       
        cout<<"Enter result #"<<i+1<<":";
        cin>>res;
        if (!cin) break;
        ar[i]=res;
    }
    return i;
}



