#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,a[1000],b[1000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int c=0,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+b[i];
        if(sum<=k){
            ++c;
        }
        else{
            break;
        }
    }
    cout<<c<<"\n";
    if(c==0){
        return 0;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<n;j++){
            if(a[j]==b[i]){
                cout<<j+1<<" ";
                a[j]=0;
                break;
            }
        }
    }
    cout<<"\n";
    return 0;
}
