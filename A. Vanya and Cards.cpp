#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n>>x;
    while(n--){
        int in;
        cin>>in;
        sum+=in;
    }
    sum=abs(sum);
    double r=ceil((double)(sum*1.0/x*1.0));
    int ri=r;
    cout<<ri<<"\n";
    return 0;
}
