#include<iostream>
using namespace std;
class  LargestNumber
{
   int a,b,c,large;
    public:
	  LargestNumber(int x,int y,int z)
	   {
	   	 a=x;
	   	 b=y;
	   	 c=z;
	   }	
     void Largest()
      {
      	large=(a>b)?(a>c?a:c):(b>c?b:c);
	  }
	 void Display()
	 {
	 	cout<<"Largest num = "<<large<<endl;
	 }
};
int main()
{
	LargestNumber l1(15,8,31);
	l1.Largest();
	l1.Display();
  return 0;
}
