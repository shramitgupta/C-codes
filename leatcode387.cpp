#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len=str.length();
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if(str[i]!=str[j]){
            cout<<str[i];
            break;
            }
        }
        
    }
    
}