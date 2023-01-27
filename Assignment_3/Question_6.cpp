#include<iostream>
using namespace std;
class  Square
{
	int a,b;
	int static count;
	 public:
	 	 Square(int x)
	 	  {
	 	  	a=x;
		  }
		void sqr()
		 {
		 	count++;
		 	b=a*a;
		 }
		void display()
		 {
		 	cout<<"Square of "<<a<<" = "<<b<<endl;
		 }
		void countsqr()
		 {
		 	cout<<count<<endl;
		 }
};
int Square::count=0;
int main()
{
	Square s1(9);
	s1.sqr();
	s1.display();
	s1.countsqr();
  return 0;
}
