#include <iostream>
using namespace std;
class shape
{
    protected:
        float x;
    public:
        void get()
        {
            cin>>x;
        }
    virtual float cal() =0;
};

class square : public  shape
{
    public:
    float cal()
    {
        return x*x;
        
    }
};
class circle : public  shape
{
    public:
    float cal()
    {
        return x*(x*3.14);
        
    }
};

int main ()
{
  square s;
  circle c;
  cout<<"\nEnter the length of square :  ";
  s.get();
  cout<<"\nArea of square is : "<<s.cal();
  cout<<"\nEnter the radius of circle  :  ";
  c.get();
  cout<<"\nArea of circle is :"<<c.cal();
  return 0;
}
