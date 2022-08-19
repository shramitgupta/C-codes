#include<iostream>
void q(int a);
int pow(int b);
using namespace std;
int main()
{
int a;
cout<<"enter the n term"<<endl;
cin>>a;
q(a);
}
void q(int a)
{
int sum=0;
for (int i=1;i<=a;i++)
{
sum=sum+pow(i);
}
cout<<sum;
}
int pow(int b)
{
return b*b; 
}