#include <iostream>
using namespace std;
void reve(int j,int count, char rev[],char str[]);
int main()
{
  char str[1000], rev[1000];
  int i, j, count = 0;
  cout<<"ENTER THE STRING YOU WANT IN REVERSE FORM"<<endl; 
  cin >> str;
  while (str[count] != '\0')
  {
  count++;
  }
  j = count - 1;
 reve(j,count,rev,str);
}
void reve(int j,int count, char rev[],char str[])
{
    int i;
    for (i = 0; i < count; i++) 
  {
  rev[i] = str[j];
  j--;
  }
  cout<<"YOUR REVERSED STRING IS:"<<endl;
  cout << rev;
}