#include<iostream>
using namespace std;
void feb(int a );
int main()
{
    int a;
    cout<<"enter the no of terms:"<<endl;
    cin>>a;
    feb(a);
}
    void feb(int a )
    {
    int arr[a];
    arr[0]=0;
    arr[1]=1;
    
    for(int i=2;i<=a;i++)
    {
    arr[i]=arr[i-1]+arr[i-2];    
    }
    for(int i=0;i<a;i++)
    {
    cout<<arr[i]<<" ";    
    }
    
}