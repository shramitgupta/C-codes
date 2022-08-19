#include<iostream>
using namespace std;
void power(int x,int y);
int main()
{
    int x,y;
    cout<<"ENTER THE BASE VALUE"<<endl;
    cin>>x;
    cout<<"ENTER THE POWER VALUE"<<endl;
    cin>>y;
    power(x,y);
}
void power(int x,int y)
{
    int z=1;
      for (int i = 0; i < y; i++)
    {
      z*=x;
    }
    cout<<z;
}