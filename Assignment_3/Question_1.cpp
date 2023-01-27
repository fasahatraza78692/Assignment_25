#include<iostream>
using namespace std;
class Complex
{
  int a,b;
   public:
     void setValue(int x,int y)
	  {
	  	a=x;
	  	b=y;
      }	
     void Display()
      {
      	cout<<"Complex number = "<<a<<"+"<<b<<"i"<<endl;
	  }
};
int main()
{
	Complex c1;
	c1.setValue(3,5);
	c1.Display();
  return 0;
}
