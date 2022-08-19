#include<iostream>
using namespace std;
void print(int m,int n){
  if(m>n)
  return;
  else
  print(m+1,n);
  cout<<m<<endl;
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}