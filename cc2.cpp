#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while (n--)
   {
    int a,b,c,bb=0,cc=0;
    string str;
    cin>>a>>b>>c;
    cin>>str;
    for (int i = 1; i <= str.length(); i++)
    {
       if (str.at(i)=='0')
           bb+=b;
       else if(str.at(i)=='1')
       cc+=c;
    }
    cout<<bb+cc;
   }
}