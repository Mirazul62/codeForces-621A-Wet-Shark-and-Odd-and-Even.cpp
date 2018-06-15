#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum=0,carry=0,a[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
   // for(i=0;i<n;i++)
   // cout<<a[i]<<" ";
   // cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            sum+=a[i];
        else
        {
            carry+=a[i];
//cout<<carry<<endl;
            if(carry%2==0)
            {
                sum+=carry;
                carry=0;
           //     cout<<carry<<endl;

            }
        }
    }
    cout<<sum;
}
