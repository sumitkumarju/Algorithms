#include<iostream>
#include<algorithm>
using namespace std;
bool mycompare(pair<string,int>p1,pair<string,int>p2)
{
    if(p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second>p2.second;

}
int main()
{
    int min_salary,n;
    cin>>n;
    cin>>min_salary;
    pair<string,int>*p1=new pair<string,int>[n];
    string name;
    int salary;
    for(int i=0;i<n;i++)
    {
        cin>>name>>salary;
        p1[i].first=name;
        p1[i].second=salary;

    }
    sort(p1,p1+n,mycompare);//function passed as a argument
    for(int i=0;i<n;i++)
    {
        if(p1[i].second>min_salary)
         cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }
    delete []p1;
}
