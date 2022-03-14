#include <iostream>
using namespace std;

class test
{
    int x;
    public:
    void read()
    {
        cout<<"Enter a number :\n";
        cin>>x;
    }
class EVEN{};
class ODD{};
void check()
{
    if(x%2==0)
    {
        throw EVEN();
    }
    else
    {
        throw ODD();
    }
};

int main () 
{
    test t;
    t.read();
    try
    {
       t.check(); 
    }
    catch(test::EVEN)  // exception handler block
    {
        cout<<"Number is EVEN";
    }
    catch(test::ODD)
    {
        cout<<"Number is ODD";
    }
    return 0;
}


 
