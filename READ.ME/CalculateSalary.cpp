#include<iostream>
using namespace std;
class CalculateSalary
{
	public:
	int Salary(int basic){
		return basic;
	}
	int Salary (int basic,int bonus){
		return basic+bonus;
	}
	double Salary(int basic,int bonus,double ot){
		return basic+bonus+ot;
	}
};
int main(){
CalculateSalary c;
cout<<"Normal Salary:"<<c.Salary(70000)<<endl;
cout<<"Bonus Salary:"<<c.Salary(70000,2000)<<endl;
cout<<"Full Salary:"<<c.Salary(70000,2000,674.2);
return 0;	
}