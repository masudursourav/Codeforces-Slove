#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int>r,c;
        int n,m,cu=0;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        cu=min(n-r.size(),m-c.size());
        if(cu%2==1)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
    return 0;
}
