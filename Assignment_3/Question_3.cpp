#include<iostream>
using namespace std;
class Factorial
{
  int a,x=1;
   public:
   	Factorial(int p)
   	{
   		a=p;
	}
   void fact()
    {
    	for(int i=1;i<=a;i++)
    	  x=x*i;
	}
	void Display()
	{
		cout<<"Factorial = "<<x;
	}	
};
int main()
{
	Factorial f1(7);
	f1.fact();
	f1.Display();
	return 0;
}
