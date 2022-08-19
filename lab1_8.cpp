#include<iostream>
using namespace std;
void wd(int n);
int main()
{  
    string str,trs;
    cout<<"ENTER THE STRING"<<endl;
    getline(cin,str);
    cout<<"ENTER THE WORD TO FIND:";
    getline(cin,trs);
    int n=str.find(trs);
     wd(n);
}
void wd(int n)
{
    if (n>0)
    cout<<"WORD FOUND";
    else
    cout<<"WORD NOT FOUND";
}
