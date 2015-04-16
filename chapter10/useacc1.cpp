/* 
 * File:   useacc1.cpp
 * Author: tarnavskiyya
 *
 * Created on 16 квітня 2015, 15:39
 */

#include <cstdlib>
#include <iostream>
#include "account.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    BankAccount my_bank("Raiffasen Bank","AZ1004543C",0.0);
    my_bank.show();
    cout<<"Putting some money....";
    my_bank.deposit(1e7);
    my_bank.show();
    return 0;
}

