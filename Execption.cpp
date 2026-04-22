#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	try{
		if(b==0)
		throw b;
		cout<<"Result="<<a/b;
	}
	catch(int x){
		cout<<"Error:Division by zero is not allowed";
	}
	return 0;
}