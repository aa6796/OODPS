#include<iostream>
using namespace std;
int main(){
	int pin,amount,balance=50000;
	cout<<"Enter ATM Pin:";
	cin>>pin;
	try{
		if(pin!=1234)
		throw pin;
		cout<<"Enter Withdrawal amount:";
		cin>>amount;
		if(amount>balance)
		throw amount;
		cout<<"Transtition";
		cout<<"Remaining Balance="<<balance-amount;
	}
	catch(int x){
		if(x==pin)
		cout<<"Error Invalid PIN";
		else
		cout<<"Error:Insufficient Balance";
	}
	return 0;
}