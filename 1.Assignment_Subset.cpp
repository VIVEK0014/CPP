//By: Vivek vagheswari
// Task assignment

#include<iostream>
#include<vector>
using namespace std;

int maximum(int a, int b, int c)
{
	if(a > b)
	{
		if(a > c)
			return a;
		else
			return c;
	}
	else
	{
		if(b > c)
			return b;
		else
			return c;
	}

}

int minimum(int a, int b, int c)
{
	if(a < b)
	{
		if(a < c)
			return a;
		else
			return c;
	}
	else
	{
		if(b < c)
			return b;
		else
			return c;
	}

}

int main()
{
	int N, S, value;
	int i;
	int x,y,z;
	
	cout << "Enter the size of queue : "; 
	cin>>N;
	cout << "Enter the size of subset: ";
	cin >> S;
	
	vector<int> Q;
	
	cout << "Enter the values: " << endl;
	for(i=0; i<N; i++)
	{
		cin >> value;
		Q.push_back(value);
	}
	
	cout << "Size = " << Q.size();
	
	cout << "\nMaximum and Minumum values of subset : \n" << endl;
	for(i=0; i<=N-S; i++)
	{
		x = Q[i];
		y = Q[i+1];
		z = Q[i+2];
		
		cout << x << " " << y << " " << z << endl;
		
		cout << "Subset " << (i+1) << " : [" << minimum(x, y, z) << "," << maximum(x, y, z) << "]" << endl;
		
	}
	
	return 0;
}