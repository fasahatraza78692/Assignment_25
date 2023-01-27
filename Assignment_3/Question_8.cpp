#include<iostream>
using namespace std;
class  Rectangle
{
   int height,breadth,ar;
    public:
	  Rectangle(int h,int b)
	   {
	   	 height=h;
	   	 breadth=b;
	   }	
     void area()
      {
      	ar=height*breadth;
	  }
	 void Display()
	 {
	 	cout<<"Area of Rectangle = "<<ar<<endl;
	 }
};
int main()
{
	Rectangle r1(15,8);
	r1.area();
	r1.Display();
  return 0;
}
