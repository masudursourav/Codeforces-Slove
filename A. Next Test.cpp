#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[30000]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        int in;
        cin>>in;
        a[in]=1;
    }
    for(int i=1;i<=3001;i++){
        if(a[i]==0){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}
