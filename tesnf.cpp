#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    int p1,p2;
    p1=a/100;
    p2=a%100;
     if(1<=p2<=12)
	{
		if(p1>=0)
	cout<<"1";
	}
    return 0;
}
