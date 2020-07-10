#include<bits/stdc++.h>
using namespace std;
struct myComp {
    bool operator () (pair<int, int> & a,pair<int, int> & b)
    {
        return a.second <= b.second;
    }
};
int dist(pair<int,int>a,pair<int,int>b)
{
    return pow(a.first-b.first,2)+pow(a.second-b.second,2);

}
vector<pair<int,int>> knearestneighbour(vector<pair<int,int>>points,pair<int,int>source,int k)
{
    vector<pair<int,int>>v;
    if(k==0)
        return v;
    else if(k>points.size())
        return points;

    priority_queue<pair<int,int>,vector<pair<int,int>>,myComp>pq;

    for(int i=0;i<k;i++)
    {

        pq.push({i,dist(points[i],source)});

    }
    for(int i=k;i<points.size();i++)
    {
         int d=dist(points[i],source);
         if(d<(pq.top()).second)
         {
             pq.pop();
             pq.push({i,d});

         }

    }

    while(k>0)
    {
        auto p=pq.top();
        pq.pop();
        v.push_back(points[p.first]);
        k--;

    }
    return v;

}
int main()
{
    vector<pair<int,int>>v={{1,2},{1,3},{100,4},{-2,-3},{1,1},{7,5}};
    pair<int,int>p={0,0};
    int k=4;
    vector<pair<int,int>>ans=knearestneighbour(v,p,k);
    for(auto i:ans)
    {

        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
