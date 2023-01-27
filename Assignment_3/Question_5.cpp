#include<iostream>
using namespace std;
class ReverseNumber
{
  int a,b=0;
   public:
     ReverseNumber(int x)
	 {
	 	a=x;
	 }	
	 void Reverse()
	  {
	  	int n=a;
	  	while(n)
	  	{
	  		b=b*10+n%10;
	  		n=n/10;
		}
	  }
	 void Display()
	  {
	  	cout<<"Reverse of "<<a<<" = "<<b;
	  }
};
int main()
{
	ReverseNumber r1(1548);
	r1.Reverse();
	r1.Display();
	return 0;
}
