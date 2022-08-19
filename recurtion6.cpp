#include <bits/stdc++.h>
using namespace std;
  int count=0;
void print(int m,int n){
    if(m<1)
    return;
    else
    print(m-1,n);
    cout<<m<<endl;
    
}
int main(){
    int n;
    cin>>n;
  print(n,n);
}