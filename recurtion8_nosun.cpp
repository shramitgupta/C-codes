#include<iostream>
using namespace std;
void print(int m,int n){
 if(m<1){
     cout<<n<<endl;
 return;
 }
 else
 {
     print(m-1,n+m);
 }
}
int main(){
    int n;
    cin>>n;
    print(n,0);
}