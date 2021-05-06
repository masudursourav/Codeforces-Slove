#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n;
    int l1=0,l0=0,r1=0,r0=0;
    while(n--){
        cin>>l>>r;
        if(l==0){
            ++l0;
        }
        else{
            ++l1;
        }
        if(r==0){
            ++r0;
        }
        else{
            ++r1;
        }
    }
    cout<<min(l1,l0)+min(r0,r1)<<"\n";
    return 0;
}
