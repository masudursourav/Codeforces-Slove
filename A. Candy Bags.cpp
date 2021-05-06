#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1,sq=n*n;
    for(int i=1;i<=n;i++){
        for(int i=0;i<n/2;i++){
            cout<<a<<" "<<sq<<"\n";
            ++a,--sq;
        }
        cout<<"\n";
    }
}
