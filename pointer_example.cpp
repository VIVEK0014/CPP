#include<iostream>
using namespace std;
class base
{
     public:
     int n1;
     void show()
     {
         cout<<"\nn1 = "<<n1;
     }
};
class derive : public base
{
     public:
     int n2;
     void show()
     {
         cout<<"\nn1 = "<<n1;
         cout<<"\nn2 = "<<n2;          
     }
};
int main()
{
    base b;
    base *bptr;      
    cout<<"Pointer of base class points to it\n";
    bptr=&b;          
    bptr->n1=44;              
    bptr->show();
    derive d;
    bptr=&d;          
    bptr->n1=66;              
    bptr->show();
    return 0;
}