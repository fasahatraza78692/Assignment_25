#include<iostream>
using namespace std;
class Circle
{
   float radius,ar;
    public:
	  Circle(float r)
	   {
	   	 radius=r;
	   }	
     void area()
      {
      	ar=3.14*radius*radius;
	  }
	 void Display()
	 {
	 	cout<<"Area of Circle = "<<ar<<endl;
	 }
};
int main()
{
	Circle c1(6);
	c1.area();
	c1.Display();
  return 0;
}
