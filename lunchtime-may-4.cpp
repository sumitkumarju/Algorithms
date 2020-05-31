#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int n=1000000;
int a[n];
vector<int>adj[n+1];
bool visited[n+1];
vector<int>v;
int dist[n];
bool ok[n];
void printAllPathsUtil(int u, int d,
                            int path[], int &path_index)
{
    visited[u] = true;
    path[path_index] = u;
    path_index++;

    if (u == d)
    {
        for (int i = 0; i<path_index; i++)
            ok[path[i]]=true;

    }
    else
    {

        for(auto i:adj[u])
            if (!visited[i])
                printAllPathsUtil(i, d, path, path_index);
    }

    path_index--;
    visited[u] = false;
}
void printAllPaths(int s, int d)
{

    int *path = new int[n];
    int path_index = 0;

    for (int i = 0; i < n; i++)
        visited[i] = false;
    for(int i=0;i<n;i++)
            ok[i]=false;
    printAllPathsUtil(s, d, path, path_index);
}

int main()
{
 int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q1;
        cin>>q1;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int p,q;
        for(int i=0;i<n-1;i++)
        {
              cin>>p>>q;
              adj[p-1].push_back(q-1);
              adj[q-1].push_back(p-1);
        }
        for(int i=1;i<=q1;i++)
        {
            cin>>p>>q;
            printAllPaths(p-1,q-1);
            int diff=INT_MAX;
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                if(ok[i])
                {
                   v.push_back(a[i]);

                }
            }
            sort(v.begin(),v.end());
            for(int i=0;i<v.size()-1;i++)
            {
                if((v[i+1]-v[i])<diff)
                    diff=(v[i+1]-v[i]);

            }
            cout<<diff<<endl;
        }

    }

    return 0;
}

