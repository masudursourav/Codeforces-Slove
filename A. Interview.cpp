#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int suma=0,sumb=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        long int in;
        cin>>in;
        suma=suma|in;
    }
    for(int i=0;i<n;i++){
        long int in;
        cin>>in;
        sumb=sumb|in;
    }
    cout<<suma+sumb<<"\n";
    return 0;
}
