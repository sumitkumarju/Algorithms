#include<iostream>
using namespace std;
double squareroot(int no,int p)
{
    int lo=0;
    int high=no;
    double ans;
    int mid;
    while(lo<=high)
    {
        mid=(lo+high)/2;
        if(mid*mid==no)
        {
            return mid;
            break;
        }

        else if(mid*mid<no)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            high=mid-1;
        }



    }

           double inc=0.1;
           for(int i=1;i<=p;i++)
           {
               while(ans*ans<=no)
               {
                   ans+=inc;

               }

               ans=ans-inc;
               inc/=10;




           }
             return ans;





}
int main()
{
    int i=48;
    cout<<squareroot(i,3);
    return 0;

}
