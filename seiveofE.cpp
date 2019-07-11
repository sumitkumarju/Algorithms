#include<bits/stdc++.h>
using namespace std;
int findLen(string& A, int n, int k, char ch)
{
    int maxlen = 1;
    int cnt = 0;
    int l = 0, r = 0;
    while (r < n) {


        if (A[r] != ch)
            ++cnt;
        while (cnt > k) {
            if (A[l] != ch)
                --cnt;
            ++l;
        }
        cout<<endl<<"R="<<r<<" L="<<l<<" r-l+1="<<r-l+1<<" count"<<cnt;

        maxlen = max(maxlen, r - l + 1);
        ++r;
    }
    return maxlen;
}

int main() {
    string s;
    int k;
    cin>>k;
    cin>>s;
    int n=s.length();

    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        maxlen=max(maxlen,findLen(s,n,k,s[i]));
    }
    cout<<maxlen;


	//code
	return 0;
}
