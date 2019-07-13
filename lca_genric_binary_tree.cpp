#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
 map<T,list<T>>adjList;
public:
    Graph()
    {

    }
    void addEdge(T u,T v,bool bidir=true)
    {

        adjList[u].push_back(v);
        if(bidir)
            adjList[v].push_back(u);
    }
    void print()
    {

        for(auto i:adjList)
        {
            cout<<i.first<<"->";
            for(auto entry:i.second)
            {
                cout<<entry<<",";
            }
            cout<<endl;
        }
    }
    void dfs(T u)
    {
       stack<T>s;
       map<T,bool>visited;
       visited[u]=true;
       s.push(u);

       while(!s.empty())
       {
           T node =s.top();
           cout<<node;
           s.pop();

           for(auto neighbour:adjList[node])
           {
               if(!visited[neighbour])
               {
                   visited[neighbour]=true;
                   s.push(neighbour);
               }

           }

       }

    }
    void path(T root,T u)
    {
        vector<int>path;
        stack<T>s;
       map<T,bool>visited;
       visited[root]=true;
       s.push(root);

       while(!s.empty())
       {
           T node =s.top();
           if(node==u)
             break;
           path.push_back(node);
           s.pop();

           for(auto neighbour:adjList[node])
           {
               if(!visited[neighbour])
               {
                   visited[neighbour]=true;
                   s.push(neighbour);
               }

           }

       }
      for(auto i:path)
        cout<<i<<" ";
    }
};
int main()
{
    Graph<int>g;
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(3,6);
    g.addEdge(3,7);
    //g.addEdge(4,5);
    //g.dfs(1);
    //vector<int>path;
    g.path(1,6);
    //for(auto i:path)
    //{
      //  cout<<i->data<<" ";
    //}
    //g.print();


}



