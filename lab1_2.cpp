#include<iostream>
using namespace std;
void find(int no,int arr[]);
void print(int count);
int main()
{
   int no,m;
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>no;
    int arr[no];
    cout<<"ENTER THE VALUES:"<<endl;
    for (int i = 0; i < no; i++)
    {
        cin>>arr[i];
    }
    find(no,arr);
}
void find(int no,int arr[])
{
  int f,count=0;
  cout<<"ENTER THE NO TO FIND IN AN ARRAY:";
  cin>>f;
  for (int i = 0; i < no; i++)
  {
      if(arr[i]==f)
      count++;
  }
  print(count);
}
void print(int count)
{
    if (count>0)
        cout<<"NO FOUND";
    else
    cout<<"NO NOT FOUND";
}