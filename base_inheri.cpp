#include <iostream>
using namespace std;
class base
    {
        int i,j;
        public:
            void set(int a,int b)
                {
                    i=a;
                    j=b;
                }
            void show()
            {
                cout<<i<<" "<<j;
            }
    };

class derived : private base
{
    int k;
    public:
        derived(int x)
        {
            k=x;
        }
        void showk()
        {
            cout<<k;
        }
};
int main()
{
    base d1;
    d1.set(1,2);
    d1.show();
return 0;
}
