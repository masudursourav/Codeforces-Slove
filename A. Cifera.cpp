#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,l;
    cin>>k>>l;
    int i=1;
    while(1){
        long long int n=pow(k,i);
        if(n==l){
            cout<<"YES"<<"\n";
            cout<<i-1<<"\n";
            return 0;
        }
        if(n>l){
            cout<<"NO"<<"\n";
            return 0;
        }
        ++i;
    }
}
