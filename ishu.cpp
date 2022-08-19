#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int N,count=0;
      int S[N],D[N];
      cin>>N;
      for (int i = 0; i < N; i++)
      {
        cin>>S[i];
      }
      for (int i = 0; i < N; i++)
      {
        cin>>D[i];
      }
     for (int i = 0; i < N; i++)
      {
        if (S[i]==D[i])
        {
           count++;
        }
   
      }
       cout <<count;
    }
}

