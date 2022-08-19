#include <iostream>
using namespace std; 
int a(int n);
int nr(int n , int r);
int b(int r);
void output(int tr,int sr,int fr);
int main() 
{ 
	int n,r;
  cout<<"ENTER n VALUE"<<endl;
  cin>>n;
  cout<<"ENTER r VALUE"<<endl;
  cin>>r;
  int tr=a(n);
  int sr=nr(n,r);
  int fr=b(r);
  output(tr,sr,fr);
}
  int a(int n)
  {
  	int tr=1;
  	for(int i=1;i<=n;i++)
  	{
  	 tr*=i;	
  	}
  	return tr;
  }
  int nr(int n , int r)
  {
  	int sr=1;
  		for(int i=1;i<=n-r;i++)
  	{
  	 sr*=i;	
  	}
  		return sr;
  }
  int b(int r)
  {
  	int fr=1;
  		for(int i=1;i<=r;i++)
  	{
  	 fr*=i;	
  	}
  		return fr;
  }
  void output(int tr,int sr,int fr){
  	float ncr=0;
  	ncr=tr/(sr*fr);
  	cout<<ncr;
  }