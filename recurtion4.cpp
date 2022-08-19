#include <bits/stdc++.h>
using namespace std;
  int count=0;
void print(int m,int n){
    if(m>n)
    return;
    else
    cout<<m<<endl;
    print(m+1,n);
}
int main(){
    int n;
    cin>>n;
  print(1,n);
}