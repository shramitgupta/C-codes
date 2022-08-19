#include<iostream>
using namespace std;
void find(int no,int arr[]);
void print(int count);
int main() {
	int x, no;
	cout << "Enter the number of items:" << "\n";
	cin >>no;
	int *arr = new int(no);
	cout << "Enter " << no << " items" << endl;
	for (x = 0; x < no; x++) {
		cin >> arr[x];
	}
	find(no,arr);
}
void find(int no,int arr[])
{
  int f,count=0;
  cout<<"ENTER THE NO TO FIND IN AN ARRAY";
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