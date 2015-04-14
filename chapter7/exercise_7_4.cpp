/* 
 * File:   exercise_7_4.cpp
 * Author: tarnavskiyya
 *
 * Created on 9 квітня 2015, 9:51
 */

#include <iostream>

double probability(unsigned numbers, unsigned picks);

int main(int argc, char** argv) {
using namespace std;
    double total, choices, mega;
    setlocale(LC_CTYPE, "rus");

    wcout << L"русский текст";    
    wcout<<L"Укажите общее количество номеров,\n"
            " количество номеров которые нужно угадать и меганомер:\n";
    while (cin>>total>>choices>>mega && choices<=total && mega<=total)
    {
        wcout<<L"Увас один шанс из "<<probability(total,choices)*mega
                <<L" чтобы выиграть.\n"
                "Следующие два числа:\n";
    }
    wcout<<L"Удачи!\n";
    return 0;
}

double probability(unsigned numbers, unsigned picks)
{
    double result=1.0;
    double n;
    unsigned p;
    for (n=numbers,p=picks;p>0;n--,p--)
        result=result*n/p;
    return result;
}

