#include<iostream>
using namespace std;
void q(int a,int b);
int main()
{
int a,b;
cout<<"enter the base"<<endl;
cin>>a;
cout<<"enter the power"<<endl;
cin>>b;
q(a,b);
}
void q(int a,int b)
{
int sum=0;
for(int i=0;i<b;i++)
{   
    sum=sum+a;
}
cout<<sum;
}