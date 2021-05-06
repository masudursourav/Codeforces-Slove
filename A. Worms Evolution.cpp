#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n,b[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    int c=0,c2=0,c3=0,ch=0;
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            for(int k=j-1;k>=0;k--){
                if(a[j]+a[k]==a[i]){
                c=a[i];
                c2=a[j];
                c3=a[k];
                ch=1;
                break;
                }
            }
            if(ch){
                break;
            }
        }
        if(ch){
            break;
        }
    }

    if(ch==0){
        cout<<"-1"<<"\n";
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if(b[i]==c){
                cout<<i+1<<" ";
                b[i]=0;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]==c2){
                cout<<i+1<<" ";
                b[i]=0;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]==c3){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}
