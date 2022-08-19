#include<iostream>
using namespace std;
int main(){
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=0,min=0;
     for (int i = 0; i < n; i++)
    {
      if(arr[i]>arr[i+1])
      max=arr[i];
      if(arr[i]<arr[i+1])
      min=arr[i];
    }
    cout<<max<<endl;
    cout<<min<<endl;

}