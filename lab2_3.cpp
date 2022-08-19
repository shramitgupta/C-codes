#include<iostream>
using namespace std;
void q(int a,int b);
void z(int a,int b);
int main()
{
    int a,b;
    cout<<"enter the two no.:";
    cin>>a>>b;
    q(a,b);
}
void q(int a,int b)
{

    if(b>a);
    int swap=0;
    swap=a;
    a=b;
    b=swap;
    z(a,b);
}
void z(int a,int b)
{

    int hcf=0;
    for(int i=1;i<=a;i++)
    {
        if 
        (a%i==0 && b%i==0)
          hcf=i;
    }
    
    cout<<hcf;
}