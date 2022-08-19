#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int count=0,count1=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
		}
		 for(int i=0;i<n;i++){
	       if(arr[i]==-1)
	        count++;
	        if(arr[i]==1)
	        count1++;
		}
		
	    if(count>0 && count<count1)
	    cout<<"YES"<<endl;
	    else{
	    cout<<"NO"<<endl;}
		cout<<count<<endl<<count1;
		

	}
	return 0;
}
