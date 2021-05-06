#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000][1000];
    memset(a,'k',sizeof(a));
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     int c=0,k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(a[i+1][j]=='o'){
            ++c;
        }
        if(a[i-1][j]=='o'){
            ++c;
        }
        if(a[i][j+1]=='o'){
            ++c;
        }
        if(a[i][j-1]=='o'){
            ++c;
        }
        if(c%2!=0){
            cout<<"NO"<<"\n";
            return 0;
        }
        }
    }
    cout<<"YES"<<"\n";
    return 0;

}
