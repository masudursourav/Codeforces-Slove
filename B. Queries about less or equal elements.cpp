#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int >v;
    long int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        long long int in;
        cin>>in;
        v.push_back(in);
    }
    sort(v.begin(),v.end());
    vector<long long int>::iterator low;
    while(m--){
        long long int q;
        cin>>q;
        low=upper_bound(v.begin(),v.end(),q);
        cout<<(low-v.begin())<<" ";
    }
    cout<<"\n";
    return 0;
}
