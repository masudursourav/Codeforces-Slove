#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b;
    cin>>n>>m>>a>>b;
    if((m*a)>b){
        cout<<(int)(n/m)*b+min((n%m)*a,b)<<"\n";
    }
    else{
        cout<<a*n<<"\n";
    }
    return 0;
}
