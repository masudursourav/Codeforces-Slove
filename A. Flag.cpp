#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    char a[1000][1000];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
        if(a[i][j]!= a[i][j-1]){
            cout<<"NO"<<"\n";
            return 0;
        }
      }
    }
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
        if(a[j-1][i]== a[j][i]){
            cout<<"NO"<<"\n";
            return 0;
        }
      }
    }
    cout<<"YES"<<"\n";
    return 0;

}
