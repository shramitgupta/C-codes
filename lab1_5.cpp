#include<iostream>
using namespace std;
void repl(char str[], char rp, char rpw);
int main()
{
    char str[100],rp,rpw;
    cout<<"ENTER THE STRING"<<endl;
    cin>>str;
    cout<<"ENTER THE CHARACTER WHAT TO REPLACE"<<endl;
    cin>>rp;
    cout<<"ENTER THE CHARACTER YOU WANT TO WITH"<<endl;
    cin>>rpw;
    repl(str,rp,rpw);
}
void repl(char str[], char rp,char rpw)
{
  for (int i = 0;str[i]; i++)
  {
      if (str[i]==rp)
      str[i]=rpw;
  }
  cout<<str;
}