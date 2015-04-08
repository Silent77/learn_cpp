#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

void task6_1()
{
    cout<<"Please enter text (Q to exit):"<<endl;
    char ch;    
    while (cin.get(ch) && toupper(ch)!='Q')
    {
        if (!isdigit(ch))
            if (isupper(ch))
                cout.put(tolower(ch));
            else
                cout.put(toupper(ch));
    }
}

void task6_2()
{
    const int ARSIZE=10;
    cout<<"Enter charities (maximum "<<ARSIZE<<"):"<<endl;
    double charity[ARSIZE];
    double total_crty,n,avr_crty;
    int i,best_count;
    i=best_count=0;
    avr_crty=total_crty=0;
    cin>>n;
    while (cin.good() && i<ARSIZE-1)
    {
        charity[i]=n;
        total_crty+=n;
        i++;
        cin>>n;
    }
    avr_crty=total_crty/i;
    cout<<"Here is average charity:"<<avr_crty<<endl;
    cout<<"Welcome the charity above average:"<<endl;
    for (int j=0;j<i;j++) if (charity[j]>avr_crty) cout<<charity[j]<<endl;    
}

void task6_3()
{
    char* menu[4]={"a) Actor","b) Baseball","c) Comedian","d) Driver"};
    for (int i=0;i<4;i++) cout<<menu[i]<<endl;
    char ch;
    cout<<"What you choose?";
    cin>>ch;
    switch (ch)
    {
            case 'a':
            case 'A':
                cout<<"Great!";
                break;
            case 'b':
            case 'B':
                cout<<"Throw a ball!";
                break;
            case 'c':
            case 'C':
                cout<<"You are funny";
                break;
            case 'd':
            case 'D':
                cout<<"Get the car first!";
                break;
            default: 
                cout<<"Please enter a,b,c or d"<<endl;
    }
}

void task6_5()
{
    struct tax_rate 
    {
        long int ammount;
        double rate;
    };
    tax_rate taxes[4] ={{5000,0},{10000,0.1},{20000,0.15},{35000,0.20}}; 
    cout<<"Enter income:";
    long int income;    
    cin>>income;
    double tax=0;
    int i;
    for (i=0;i<3;i++)
    {
        if ((income-taxes[i].ammount)>0)
            tax+=taxes[i].ammount*taxes[i].rate;    
        else
        {
         //   i++;
            break;        
        }
        cout<<tax<<endl;
    }
    if ((income-taxes[i].ammount)>0)
        tax+=(income-taxes[i].ammount)*taxes[i].rate;
    else
        tax+=(income-taxes[i-1].ammount)*taxes[i].rate;        
    cout<<"Index:"<<i<<endl;
    cout<<"Your tax:"<<tax<<endl;
}
int main() 
{ 
    task6_5();
}
