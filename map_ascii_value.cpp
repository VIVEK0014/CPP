#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int>m;
    int i;
    for(i=0;i<26;i++)
    {
        m.insert(pair<char, int>('A'+i,65+i));
    }
    char ch;
    cout<<"Enter key(an uppercase letter): ";
    cin>>ch;
    map<char,int>::iterator p;
    p=m.find(ch);
    if(p != m.end())
    {
        cout<<"It's ASCII value is "<<p->second;
    }
    else
    cout<<"Key not in map. \n";
    
    //////
    
    for(i=0;i<26;i++)
    {
        m.insert(pair<char, int>('a'+i,97+i));
    }
    char cha;
    cout<<"\nEnter key(an lowercase letter): ";
    cin>>cha;
    map<char,int>::iterator k;
    k=m.find(cha);
    if(k != m.end())
    {
        cout<<"It's ASCII value is "<<k->second;
    }
    else
    cout<<"Key not in map. \n";
    
    return 0;
}
