#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n"<<1<<"\n";
    }
    else if(n==2){
            cout<<1<<"\n"<<1<<"\n";
    }
    else if(n==3){
        cout<<2<<"\n"<<1<<" "<<3<<"\n";
    }
    else{
        cout<<n<<"\n";
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
        for(int i=1;i<=n;i++){
            if(i%2==1){
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
