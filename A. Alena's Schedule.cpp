#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[1000];
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            ++c;
        }
    }
    for(int i=1;i<n-1;i++){
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1){
            ++c;
        }
    }
    cout<<c<<"\n";
    return 0;

}
