#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph
{
    map<T,list<T> >adjList;
public:
    graph()
    {

    }
    void addEdge(T u, T v,bool bidir=true)
    {
        adjList[u].push_back(v);
        if(bidir)
        {
            adjList[v].push_back(u);
        }

    }
    void print(){
    for(auto i:adjList){
        cout<<i.first<<"->";
        for(auto entry:i.second){
            cout<<entry<<",";
        }
        cout<<endl;
    }
    }
    int bfs(T src,T des)
    {
        queue<T> q;
        map<T,int>dist;
        map<T,T>parent;

        for(auto i:adjList)
        {
            dist[i.first]=INT_MAX;
        }

        q.push(src);
        dist[src]=0;
        parent[src]=src;

        while(!q.empty())
        {
            T node = q.front();
            //cout<<node<<" ";
            q.pop();

            for(auto neigbour:adjList[node])
            {
                if(dist[neigbour]==INT_MAX)
                {
                    q.push(neigbour);
                    dist[neigbour]=dist[node]+1;
                    parent[neigbour]=node;
                }
            }

        }
       // for(auto i:adjList)
        //{
            //T node =i.first;
            //cout<<endl;
            //cout<<"Dist of "<<node<<" is"<<dist[node]<<endl;
            //cout<<"Parent of"<<node<<"="<<parent[node]<<endl;
        //}
        T temp=des;
        while(temp!=src)
        {
            cout<<temp<<"<--";
            temp=parent[temp];
        }
        cout<<temp;

        return dist[des];
    }




};
int main()
{
    graph<int>g1;
    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;
    for(int u=1;u<=36;u++)
    {
        for(int dice=1;dice<=6;dice++)
        {
            int v=u+dice+board[u+dice];
            g1.addEdge(u,v,false);

        }
    }
    int diat=g1.bfs(1,36);
    cout<<"\nTHE SHORTEST PATH FROM SOURCE TO DESTINATION "<<diat;
}

