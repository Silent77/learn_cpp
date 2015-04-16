/* 
 * File:   account.h
 * Author: tarnavskiyya
 *
 * Created on 16 квітня 2015, 11:48
 */

#ifndef ACCOUNT_H
#define	ACCOUNT_H

#include <string>
using std::string;

class BankAccount
{
private:
    string name;
    string account_num;
    double balance;
public:
    BankAccount(string n="Noname",string num="",double b=0.0);
    void show() const;
    void deposit(double f);
    void withdraw (double f);
};

#endif	/* ACCOUNT_H */

