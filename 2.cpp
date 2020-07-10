#include<bits/stdc++.h>
using namespace std;
/*
0,1<2=2^1(1)
00,01,10,11<4=2^2(2)
000,001,010,011,100,101,110,111<7=2^3(3)
                                      <2^n-1(n)
*/

//space complexity=o(n)
string binary(int n)
{
    if(n==0)
        return "0";
    int t=n;
    int rem=0;
    string ans;
    while(t>0)
    {
        rem=t%2;
        ans+=to_string(rem);
        t/=2;
    }
    return ans;

}
//time complexity=o(n)*2^n=exponential  2.26
void generate(int n)
{
    int pow=2;
    int p=1;
    bool flag=0;
    while(n>0)
    {
        for(int i=0;i<pow;i++)
        {
            string ans= binary(i);
            while(ans.length()<p)
              ans="0"+ans;
            cout<<ans<<endl;
            n--;
            if(n<=0)
            {
                flag=1;
                break;

            }

        }
        if(flag)
            break;
        pow*=2;
        p++;

    }

}
//o(n) for time complexity o(2^n) for space complexity n is the no. of bit in the output 2.486
int main()
{
    int n;
    cin>>n;
    //generate(n);//15.4
    queue<string>q;
    q.push("0");
    q.push("1");
    while(n>0)
    {
        string t=q.front();
        q.pop();
        cout<<t<<endl;
        q.push(t+"0");
        q.push(t+"1");
        n--;
    }
    return 0;
}
