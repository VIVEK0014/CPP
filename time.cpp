#include<iostream>
#include<ctime>
using namespace std;

int main()
{
time_t now =time(0);
// current date and time based on current system

cout<<"No of second since january 1,1970 is ::" << now<< endl;
tm *ltm = localtime(&now);

//print time structure

cout<< "Year:" << 1900 + ltm->tm_year<<endl; 
cout<< "Month:" << 1 + ltm->tm_mon<<endl; 
cout<< "Day:" << ltm->tm_mday<<endl; 
cout<< "Time:" << 5 + ltm->tm_hour<< ":";
cout<< 30 +ltm->tm_min << ":";
cout << ltm->tm_sec <<endl;
}  
