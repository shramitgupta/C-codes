#include<iostream>
#include<string>
using namespace std;
class mine{
    public:
    int num; 
    string name;
};
int main()
{
    mine obj;
    obj.num=15;
    obj.name="roy";

    cout<<obj.num<<endl;
    cout<<obj.name;
}