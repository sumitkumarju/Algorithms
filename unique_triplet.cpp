#include<bits/stdc++.h>
using namespace std;
struct triplet
{
    int first;
    int second;
    int third;
};
void find_triplet(int a[],int n,int sum)
{
    vector<triplet>triple;
    unordered_set<string>s;
    string temp;
    triplet t;

    sort(a,a+n);
    int l;
    int h;
    for(int i=0;i<n-2;i++)
    {
        l=i+1;
        h=n-1;
        while(l<h)
        {
            if(a[i]+a[l]+a[h]==sum)
            {

                temp=to_string(a[i])+to_string(a[l]+a[h]);
                if(s.find(temp)==s.end())
                {
                    s.insert(temp);
                      t.first=a[i];
                      t.second=a[l];
                      t.third=a[h];

                    triple.push_back(t);

                }

                l++;
                h--;
            }
            else if(a[i]+a[l]+a[h]>sum)
            {
                h--;
            }
            else
                l++;

        }


    }
    for(int i = 0; i < triple.size(); i++)
    {
        cout << "[" << triple[i].first
            << ", " << triple[i].second
          << ", " << triple[i].third <<"], ";
    }
}
int main()
{
    int* a = NULL;   // Pointer to int, initialize to nothing.
    int m;           // Size needed for array
    cin >> m;        // Read in the size
    a = new int[m];

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    find_triplet(a,m,sum);

}
