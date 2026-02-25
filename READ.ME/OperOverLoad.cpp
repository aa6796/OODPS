#include<iostream>
using namespace std;
class OperOverLoad{
	private:
		int num;
		public:
			OperOverLoad(int n){
				num+n;
			}
			void operator ++(){
				num+num+1;
			}
			void display(){
				cout<<"The Count is:"<<num<<endl;
			}
};
int main(){
	OperOverLoad o(10);
	o.display();
	++o;
	o.display();
	return 0;
}