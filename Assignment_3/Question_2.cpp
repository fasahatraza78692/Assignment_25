#include<iostream>
using namespace std;
class Time
{
	int h,m,s;
	public:
		void setTime(int x,int y,int z)
		 {
		 	h=x;
		 	m=y;
		 	s=z;
		 }
		void Display()
		 {
		 	cout<<h<<" hr "<<m<<" min "<<s<<" sec"<<endl;
		 }
};
int main()
{
	Time t1;
	t1.setTime(3,45,20);
	t1.Display();
	return 0;
}
