#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int y,k,n,r;
    cin>>y>>k>>n;
    n=n-y;
    r=y%k;
    r=k-r;
    if(r>n){
        cout<<"-1"<<"\n";
        return 0;
    }
    else{
        while(1){
            if(r<=n){
                cout<<r<<" ";
                r=r+k;
            }
            else{
                break;
            }
        }
        cout<<"\n";
    }
    return 0;
}
