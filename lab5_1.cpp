#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int fno,count=0;
    cin>>fno;
    int i,k=-1;
    for( i=0;i<n;i++)
    {
        if(fno==arr[i]){
            count++;
            cout<<i;
            }

    }
    if (count==0)
        cout<<k;
}
