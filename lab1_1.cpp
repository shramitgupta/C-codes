#include<iostream>
using namespace std;
void max(int no, int arr[]);
int main()
{
    int no,m;
    cout<<"ENTER THE SIZE OF ARRY"<<endl;
    cin>>no;
    int arr[no];
    for (int i = 0; i < no; i++)
    {
        cin>>arr[i];
    }
    max(no,arr);
}
void max(int no, int arr[])
{
    int big=arr[0];
    for (int i = 0; i < no; i++)
    {
        if(big<arr[i])
        big=arr[i];
    }
    cout<<"LARGEST NO:"<<big;
}
