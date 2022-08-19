#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class employee
{
    public:
    int emp_id;
    string emp_name;
    string emp_city;
    vector<employee> v1;
    int count;
    employee()
    {
        this -> emp_id = 0;
        count = 0;
    }
    void insert(int emp_id,string emp_name,string emp_city)    {
        employee e;
        e.emp_id = emp_id;
        e.emp_name = emp_name;
        e.emp_city = emp_city;
        v1.push_back(e);
        count++;
    }
    void ﬁnd(int emp_id)
    {
        for(int i=0;i < v1.size();i++)
        {
            if(v1[i].emp_id == emp_id)
            {
                cout << v1[i].emp_id <<" "<<v1[i].emp_city <<" "<<v1[i].emp_name<<endl;
            }
        }
    }
    void sortonid()
    {
        sort(v1.begin(),v1.end());
    }
    int size()
    {
        return count;
    }
};
int main()
{
    employee e1,e2,e3;
    e1.insert(10,"Kunal","Bareilly");
    e2.insert(20,"Khan","Lucknow");
    e3.insert(30,"Nanu","Bareilly");
    e1.ﬁnd(10);
    return 0;
}
