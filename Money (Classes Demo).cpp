#include<iostream>
#include<iomanip>   
using namespace std;

class Money{

private:
int dollars;
int cents;

public:
Money();
Money(int d, int c);
void setDollars(int d);
void setCents(int c);
int getDollars();
int getCents();
double getTotal();
};

int main (){

Money acct1(6,50);
Money acct2;

cout<<fixed<<setprecision(2);

cout<<"Account 1Dollars:"<<acct1.getDollars()<<endl<<
            "Account 1 Cents: "<<acct1.getCents()<<endl<< 
            "Total amount in account 1 is $"<<acct1.getTotal()<<endl;
            cout<<endl;
 
cout<<"Account 2 Dollars:"<<acct2.getDollars()<<endl<<
            "Account 2 Cents: "<<acct2.getCents()<<endl<< 
            "Total amount in account 2 is $"<<acct2.getTotal()<<endl;
            cout<<endl;

acct1.setDollars(7);
acct1.setCents(80);

acct2.setDollars(10);
acct2.setCents(56);

cout<<"Update Account 1 Dollars:"<<acct1.getDollars()<<endl<<
            "Update Account 1 Cents: "<<acct1.getCents()<<endl<< 
            "Update Total amount in account 1 is $"<<acct1.getTotal()<<endl;
            cout<<endl;

cout<<"Update Account 2 Dollars:"<<acct2.getDollars()<<endl<<
            "Update Account 2 Cents: "<<acct2.getCents()<<endl<< 
            "Update Total amount in account 2 is $"<<acct2.getTotal()<<endl;


return 0;
}

Money :: Money() : dollars(0),cents(0)
{  //inital value of dollar and cenet is set to 
}

Money::Money(int d, int c){
dollars = d;
cents = c;
}

void Money::setDollars(int d){
dollars = d;
}

void Money::setCents(int c){
cents = c;
}

int Money::getDollars(){
return dollars;
}

int Money::getCents(){
return cents;
}

double Money::getTotal(){

double total = dollars + ( (double)cents/100);

return total;
}