/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream> 
using namespace std;
class A
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
};
class B
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};
class C : public A, public B   
{
 	public:
 	void s()
 	{
 	    cout << "Sum = " << x + y;
 	}
};

int main()
{
 	 C obj1; 
 	 obj1.getx();
 	 obj1.gety();
 	 obj1.s();
 	 return 0;
}   	

