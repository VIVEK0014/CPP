
#include<iostream>
  using namespace std;
int main () 
{
  
    int n1, n2;
    cout << "Enter 1st num:\n";
    cin >> n1;
  
    cout << "Enter 2nd num:\n";
    cin >> n2;

try 
  {
    
    if (n2 != n1)
      {
        float div = (float) n1 / n2;
        if (div < 1)
        throw 'e';
        cout << "n1/n2 = " << div;
      }
    else
    throw n2;
  }
catch (int e) 
  {
    cout << "Exception division by zero";
  } 
catch (char st) 
  {
    cout << "Exception division is less than 1";
  } 
catch ( ...) 
  {
    cout << "Exception is unknown";
  } 
}
