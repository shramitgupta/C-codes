#include<iostream>
using namespace std;
void prime(int no);
void check(int count);
int main()
{
    int no;
    cout<<"ENTER THE NO THAT YOU WANT TO CHECK FOR PRIME :-";
    cin>>no;
    prime(no);
}
void prime(int no)
{
    int count=0;
    for (int i = 1; i <= no; i++)
    {
        if (no%i==0)
            count++;
    }
    check(count);
}
void check(int count)
{
    if (count==2)
    cout<<"THE NO IS PRIME ";
    else
    cout<<"THE NO IS NOT PRIME"; 
}