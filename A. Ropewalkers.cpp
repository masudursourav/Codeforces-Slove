//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[3],d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    cout<<max(0LL,d-(a[1]-a[0]))+max(0LL,d-(a[2]-a[1]))<<"\n";

    return 0;
}
