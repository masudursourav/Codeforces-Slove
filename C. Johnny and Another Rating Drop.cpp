#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int sum=0;
        while(n>0){
            sum+=n;
            n=n/2;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
