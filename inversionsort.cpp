#include<bits/stdc++.h>
using namespace std;

int tot;
int merge(int*a,int m,int l,int h)
{
    int la=m-l+1;
    int ra=h-m;
    int i,j,k;
    int L[la], R[ra];
    for (i = 0; i < la; i++)
        L[i] = a[l + i];
    for (j = 0; j < ra; j++)
        R[j] = a[m + 1+ j];
    i=j=0;
    int count=0;
    k=l;
    while(i<la&&j<ra)
    {
      if(L[i]<=R[j])
      {
          a[k]=L[i];
          i++;
          k++;
      }
      else
      {
          a[k]=R[j];
          j++;
          k++;
          count+=la-i;
      }

    }
    while(i<la)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<ra)
    {
        a[k]=R[j];
        j++;
        k++;

    }
    return count;

}
void mergesort(int *a,int l,int h)
{
    if(l<h)
    {

        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        tot=tot+merge(a,mid,l,h);
    }

}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);


    cout<<tot;

}
