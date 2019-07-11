#include<iostream>
using namespace std;
void generateparenthesis(int ind,int n,int open,int close,char*output)
{
    if(ind==2*n)
    {
        output[ind]='\0';
        cout<<output<<endl;
        return;
    }
    if(open<n)
    {
        output[ind]='(';
        generateparenthesis(ind+1,n,open+1,close,output);
    }
    if(close<open)
    {
        output[ind]=')';
        generateparenthesis(ind+1,n,open,close+1,output);

    }
    cout<<output<<endl;
}
int main()
{
    char output[100];
    int n=2;
    cin>>n;
    generateparenthesis(0,n,0,0,output);


}
