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
    void bfs(T src)
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
            cout<<node<<" ";
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
        for(auto i:adjList)
        {
            T node =i.first;
            cout<<endl;
            cout<<"Dist of"<<node<<"from"<<src<<"is"<<dist[node]<<endl;
            cout<<"Parent of"<<node<<"="<<parent[node]<<endl;
        }
    }




};
int main()
{

    graph<string> g;
    g.addEdge("Putin","Trump",false);
    g.addEdge("Putin","Modi",false);
    g.addEdge("Putin","Pope",false);
    g.addEdge("Modi","Trump",true);
    g.addEdge("Modi","Yogi",true);
    g.addEdge("Yogi","Prabhu",false);
    g.addEdge("Prabhu","Modi",false);
    graph<int>g1;
    int board[50]={0};
    board[2]=13;
    board[2]=2;
    board[2]=18;
    board[2]=11;
    board[2]=-13;
    board[2]=-14;
    board[2]=-8;
    board[2]=-10;
    board[2]=-2;
    board[2]=-22;
    g1.addEdge(0,1);
    g1.addEdge(1,2);
    g1.addEdge(0,4);
    g1.addEdge(2,4);
    g1.addEdge(2,3);
    g1.addEdge(3,5);
    g1.addEdge(3,4);
    g1.bfs(0);
}
