#include<iostream>
using namespace std;

int sum(int i)
	{
		return i;
	}

int sum(int i, int j)
	{
		return (i+j);
	}

float sum(float i, float j, float k)
	{
		return (i+j+k);
	}
int sum(int i, int j, int k)
	{
		return (i+j+k);
	}

int main()
	{
		cout<< "sum : " << sum(1) << endl;
		cout<< "sum : " << sum(1,2) << endl;
		cout<< "sum : " << sum(1.9f,2.5f,3.7f) << endl;
		cout<< "sum : " << sum(1,2,3) << endl;
	}
