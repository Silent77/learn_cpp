
#include <iostream>
#include "account.h"

BankAccount::BankAccount(string n, string num, double b)
{
    name=n;
    account_num=num;
    balance=b;
}
void BankAccount::show() const
{
    using std::cout;
    using std::endl;
    using std::ios_base;
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout<<"Bank account details:"<<endl;
    cout<<"Account name:"<<name<<endl;
    cout<<"Account:"<<account_num<<endl;
    cout<<"Balance:"<<balance<<endl;
}

void BankAccount::deposit(double f)
{
    using std::cerr;
    if (f<0)
        cerr<<"The sum of deposit must be greater 0.";
    else
        balance+=f;
}
void BankAccount::withdraw(double f)
{
     using std::cerr;
     if (f>balance || f<0) 
         cerr<<"You cannot widthraw more than have or widthdraw negative value.";
     else
         balance-=f;    
}
