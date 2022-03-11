#include <iostream>
using namespace std;
class A
{
public:
  void displayA ()
  {
    cout << "A";
  }
};
class B
{
public:
  void displayB ()
  {
    cout << "B";
  }
};
class C:public A
{
public:
  void displayC ()
  {
    cout << "C";
  }
};
class D:public B
{
public:
  void displayD ()
  {
    cout << "D";
  }
};
class E:public C, public D
{
public:
  void displayE ()
  {
    cout << "E";
  }
};
class F:public E
{
public:
  void displayF ()
  {
    cout << "F";
  }
};
int
main ()
{
  E e;
  e.displayA ();

  return 0;
}
