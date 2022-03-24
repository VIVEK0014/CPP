#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int>lst1,lst2;
    int i;
        for(i=0;i<10;i++)
        lst1.push_back(rand()%20);
        
        for(i=1;i<11;i++)
        lst2.push_back(rand()%20);
        cout<<"contents of lst1: \n ";
        list<int>::iterator p = lst1.begin();
        while(p != lst1.end())
        {
            cout<<*p<<" ";
            p++;
        }
        cout<<"\n\n";
        cout<<"contents of lst2: \n ";
        p=lst2.begin();
        while(p != lst2.end())
        {
            cout<<*p<<" ";
            p++;
        }
        cout<<"\n";
        cout<<"\ncontents of lst1 after sorting: \n ";
        lst1.sort();
        p=lst1.begin();
        while(p != lst1.end())
        {
            cout<<*p<<" ";
            p++;
        }
        
        cout<<"\ncontents of lst2 after sorting: \n ";
       // lst2.sort();
        p=lst2.begin();
        while(p != lst2.end())
        {
            cout<<*p<<" ";
            p++;
        }
        cout<<endl;
        lst1.merge(lst2);
        if(lst2.empty())
        cout<<"\nlst2 is now empty\n";
        cout<<"contents of lst1 after merge: \n";
        p = lst1.begin();
        while(p!=lst1.end())
        {
            cout<<*p<<" ";
            p++;
        }
        
        
    return 0;
}
