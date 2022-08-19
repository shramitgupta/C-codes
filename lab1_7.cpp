#include<iostream>
using namespace std;
void input(int no);
void ass(int no,int arr[]);
void dec(int no,int arr[]);
void condi(int no, int arr[]);
int main()
{
  int no;
  cout<<"ENTER THE SIZE OF ARRAY"<<endl;
  cin>>no;
  input(no);
}
void input(int no)
{
    int arr[no];
  cout<<"ENTER THE VALUS OF ARRAY"<<endl;
  for (int i = 0; i < no; i++)
  {
      cin>>arr[i];
  }
  condi(no,arr);
}
void ass(int no,int arr[])
{
    int temp=0;
   for(int i=0; i<no; i++)
    {
        for(int j=i+1; j<no; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"IN ASSENDING ORDER:"<<endl;
    for (int i = 0; i < no; i++)
    {
        cout<<arr[i]<<endl;
    }
}
void dec(int no,int arr[])
{
   int temp=0;
   for(int i=0; i<no; i++)
    {
        for(int j=i+1; j<no; j++)
        {
            if(arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"IN DECENDING ORDER:"<<endl;
    for (int i = 0; i < no; i++)
    {
        cout<<arr[i]<<endl;
    }
}
void condi(int no, int arr[])
{
    int n;
   cout<<"ENTER 1 FOR ASSENDING ORDER"<<endl;
   cout<<"ENTER 2 FOR DECENDING ORDER"<<endl;
   cin>>n;
   if(n==1)
   ass(no,arr);
   else if (n==2)
   dec(no,arr);
   else
   cout<<"WRONG CHOICE"<<endl;
}
