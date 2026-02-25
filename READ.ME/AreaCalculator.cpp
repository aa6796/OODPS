#include<iostream>
using namespace std;
class AreaCalculator
{
	public:
		//Area of square
		int area(int side)
		{
			return side*side;
		}
		//Area of Rectangle
		int area(int l,int b)
		{
			return l*b;
		}
		//Area of circle
		double area(double r)
		{
			return 3.14*r*r;
		}
};
int main(){
	AreaCalculator obj;
	cout<<"Area of Square:"<<obj.area(5)<<endl;
	cout<<"Area of Rectangle:"<<obj.area(6,7)<<endl;
	cout<<"Area of Circle:"<<obj.area(6.2)<<endl;
	return 0;
}