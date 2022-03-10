#include <iostream>
using namespace std;
class base
{
public:
  
  virtual void show ()
  {
    cout << "base\n = ";
  }
};
class der1:public base
{
public:
  void show ()
  {
    cout << "der1\n";
  }
};

class der2:public base
{
public:
  void show ()
  {
    cout << "der2\n";
  }
};
int main ()
{
  der1 d1;
  der2 d2;
  base* ptr;
  ptr = &d1;
  ptr->show();
  ptr = &d2;
  ptr->show();
  return 0;
}
