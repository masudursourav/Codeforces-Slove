#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[1000];
    memset(a,0,sizeof(a));
    cin>>n>>m;
    while(m--){
        int in;
        cin>>in;
        for(int i=in;i<=n;i++){
            if(a[i]==0){
                a[i]=in;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
