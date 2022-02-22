#include<iostream>
using namespace std;

class xyz
{
	public:
	int a;
		xyz()
		{
			a=10;
		}
};

int disp()
	{
		int i =10;
		return i;
	}

void disp(int i, float f)
{
	cout<<"value in function defined by int and float argument is:"<<i<<" "<<f<<endl;
}

void disp(int i, float f, char c, xyz q)
{
	cout<<"value in function defined by int and float char and xyz class argument is:"<<i<< ""<<f<<" "<<c<<" "<<q.a<<endl;
}

int main()
{
	xyz t;
	int i;
	float f=21.1;
	char c='v';

	i=disp();
	cout<<"value in function defined by int argument is: "<<i<<endl;
	disp(i,f);
	disp(i,f,c,t);
}
