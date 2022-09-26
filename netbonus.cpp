//program to print the net bonus
#include <iostream>
using namespace std;
int main() {
    int salary,yearofservice;
    float netbonus;
    cout << "What is your salary?:";
    cin>>salary;
    cout<<"How many years have you worked with us?:";
    cin>>yearofservice;
   if(yearofservice > 10)
   {
       netbonus=(salary*0.1);
       cout<<"Your net bonus is €"<<netbonus;
   }
    else if(yearofservice >= 6 && yearofservice <= 10)
   {
       netbonus=(salary*0.8);
       cout<<"Your net bonus is €"<<netbonus;
   }
   else if(yearofservice < 6)
   {
       netbonus=(salary*0.5);
       cout<<"Your net bonus is €"<<netbonus;
   }
    return 0;
}