/* 
 * File:   exercise_8_6.cpp
 * Author: tarnavskiyya
 *
 * Created on 14 квітня 2015, 11:56
 */

#include <cstdlib>
#include <iostream>

using namespace std;

template <class T> T maxn(const T ar[],const int n);
template <> char maxn<char*>(const char* ar[],const int n);
/*
 * 
 */
int main(int argc, char** argv) {
    int ar1[]={5,4,6,7,8};
    double ar2[]={500,-4,6e2};
    cout<<"Max 5:"<<maxn(ar1,5)<<endl;
    cout<<"Max 3:"<<maxn(ar1,3)<<endl;
    cout<<"Max double 3:"<<maxn(ar2,3)<<endl;   
//    char* str[5]={"My","Head","Is","very","big"};
//    char* s=maxn(str,5);
//    cout<<"The max string is:"<<s<<" at address "<<&s;
    char ar3[3]="hi";
    cout<<"Max char:"<<maxn(ar3,2)<<endl;
    return 0;
}

template <class T> T maxn(const T* t,const int n)
{
    T max=t[0];
    for (int i=1;i<n;i++)
        if (max<t[i]) max=t[i];
    return max;
}

template <> char maxn<char*>(const char* ch[],const int n)
{
    /*int max_l=0;
    int max_i=0;
    int l;
    for (int i=1;i<n;i++)
    {
        l=strlen(ar[i]);
        if (l>max_l) 
        {
            max_l=l;
            max_i=i;
        }
    }
    return ar[max_i];
     */
    return ch[0];
}
