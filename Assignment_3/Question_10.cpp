#include<iostream>
using namespace std;
class Area
{
   float x,y,z;
    public:
	 Area(float a,float b=0)
	 	{
	 		x=a;
	 		y=b;
		}
	void Rect_Area()
	 {
	 	z=x*y;
	 }
	void Cir_Area()
	 {
	 	z=x*x*3.14;
	 }
	void Square_Area()
	 {
	 	z=x*x;
	 }
	void Display()
	 {
	 	cout<<"Area = "<<z<<endl;
	 }
};
int main()
{
	Area a1(5,3);
	a1.Rect_Area();
	a1.Display();
	return 0;
}
