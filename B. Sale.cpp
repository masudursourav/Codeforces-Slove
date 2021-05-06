#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100000];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long int sum=0;
    for(int i=0;i<m;i++){
        if(a[i]<=0)
        sum+=a[i];
    }
    cout<<abs(sum)<<"\n";
    return 0;
}
