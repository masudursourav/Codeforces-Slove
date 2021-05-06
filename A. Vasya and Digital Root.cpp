#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(k==0){
        if(n!=1){
            cout<<"No solution"<<"\n";
            return 0;
        }
        if(n==1){
            cout<<"0"<<"\n";
            return 0;
        }
    }
    cout<<k;
    for(int i=0;i<n-1;i++){
        cout<<"0";
    }
    cout<<"\n";
    return 0;
}
