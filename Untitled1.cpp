#include <iostream>
using namespace std;
int main() {
    int n;
    int a[1000];
    int len=0;
    int i=0;
    int n1;
    int k1;
    int min=n;
    int sum=0;
    int k;
    int j;
    cin>>k;
    cin>>n;
    n1=n;
    while(n1--)
    {
        cin>>a[i];
        i++;

    }

    i=0;
    j=0;
    min=n;
    sum=0;
    while(i!=n&&j!=n)
    {

        if(sum<k)
        {
            cout<<"oye";

             sum+=a[j];
             j++;

        }
        else if(sum>k)
        {
          cout<<"KEMON";
          sum=sum-a[i];
          i++;
        }
        else
        {


            len=j-i;
            if(len<min)
            {
                min=len;
                cout<<min;

            }
            sum=sum-a[i];
            i++;

        }
    }
    cout<<"FUCK\n";
    cout<<min;
    return 0;
}

