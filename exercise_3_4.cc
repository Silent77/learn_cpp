/*
 * Copyright (c) 2009-2010, Oracle and/or its affiliates. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of Oracle nor the names of its contributors
 *   may be used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include <cctype>

using namespace std;
void task6_1()
{
    int n1,n2;
    cout<<"Enter number 1:"<<endl;cin>>n1;
    cout<<"Enter number 2:"<<endl;cin>>n2;
//    long sum=0;
//    for (int i=n1;i<=n2;++i)sum+=i;
//    cout<<"Sum:"<<sum<<endl;
    cout<<"Sum:"<<(2*n1+n2-n1)*(n2-n1+1)/2<<endl;
};

void task6_2()
{
    cout<<"Enter number (0 - end):"<<endl;
    int n1,sum=0;
    do
    {
        cin>>n1;
        sum+=n1;
    }
    while (n1);
    cout<<"Sum:"<<sum<<endl;
}

void task6_3()
{
    long daphne_starting=100,cleo_starting=100;
    int year=0,daphne_current=daphne_starting,cleo_current=cleo_starting;
    do
    {
        year++;
        daphne_current+=daphne_starting*0.1;
        cleo_current+=cleo_current*0.05;
        cout<<"Year"<<year<<"\tDaphne:"<<daphne_current<<"\tCleo:"<<cleo_current<<endl;
    }
    while(daphne_current>cleo_current);
}

void task6_6()
{
    struct car 
    { 
        char model[32];
        unsigned int year;
    };
    
    cout<<"How many cars do you have?";
    int car_nums=0;
    (cin>>car_nums).get();
    car* cars=new car[car_nums];
    for (int i=0;i<car_nums;i++)
    {
        cout<<"Enter model of the car "<<i<<endl;
        cin.getline(cars[i].model,32);
        cout<<"Enter year of the car "<<i<<endl;
        (cin>>cars[i].year).get();        
    }
    cout<<"Your cars:"<<endl;
    for (int i=0;i<car_nums;i++)
    {
        cout<<cars[i].model<<" ("<<cars[i].year<<')'<<endl;
    }
//    destroy cars[];
       
}
int main() { 
    char str[]="hello, My darling (2000)";
    for (int i=0;str[i];i++)str[i]=toupper(str[i]);
    cout<<str<<endl;
}
