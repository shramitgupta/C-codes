#include <bits/stdc++.h>
using namespace std;
  int count=0;
void print(int m,int n){
    if(m-1==n)
    return;
    else
    cout<<n<<endl;
    print(m,n-1);
}
int main(){
    int n;
    cin>>n;
  print(1,n);
}