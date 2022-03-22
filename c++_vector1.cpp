#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<char> v(10);
    int i;
    cout<<"size ="<<v.size()<<endl;
    for(i=0;i<10;i++)
        v[i]=i+'a';
        cout<<"current contents :";
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<"\n\n";
    cout<<"exapanding vector\n";
    for(i=0;i<10;i++)
        v.push_back(i+10+'a');
        cout<<"size now ="<<v.size()<<endl;
        cout<<"current contents :";
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" "<<endl;
    for(i=0;i<v.size();i++)
        v[i]=toupper(v[i]);
        cout<<"modified contents :\n";
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;

return 0;   
}  