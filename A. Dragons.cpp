#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  s,n;
    cin>>s>>n;
    pair<long int,long int>a[n];
    for(long long i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    long long c=0;
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(s>a[i].first)
        {
            s=s+a[i].second;
            c++;
        }
    }
    if(c==n)
    {
        cout<<"YES" << endl;
    }
    else
    {
        cout<<"NO" << endl;
    }
    return 0;
}
