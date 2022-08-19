#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
    cin>>a;
    int p1,p2;
    p1=a/100;
    p2=a%100;
     if((p2<=12 && p2>=1 && p1>=0) &&(p1<=12 && p1>=1 && p2>=0) ){
	cout<<"0";
	}
	 else if(p2<=12 && p2>=1)
	{
		if(p1>=0)
	cout<<"1";
	}
	else if(p1<=12 && p1>=1)
	{
		if(p2>=0)
	cout<<"2";
	}
	else 
	cout<<"-1";
}
