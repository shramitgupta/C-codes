#include<iostream>
using namespace std;
void Array(int arr[], int start, int len);
void change(int arr[],int n,int k );
void print(int arr[],int n,int start);
int main(){
    int n;
    cin>>n;
    int arr[n];
    Array(arr,0,n);
    print(arr,n,0);
}
void Array(int arr[], int start, int len)
{
    if(start >= len)
        return;
        else{
   cin>>arr[start];
      Array(arr, start + 1, len); 
    }
    change(arr,len,0);
}
void change(int arr[],int n,int k ){
  if(k>=n)
  return;
  else{
      swap(arr[k],arr[n]);
      change(arr,k+1,n-1);
  }
}
void print(int arr[],int n,int start){
if(start >= n)
        return;
        else{
   cout<<arr[start]<<endl;
     print(arr,n,start++);
    }
}
