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
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    ll c=0,d=0;
    for(int i=0;i<n/2;i++){
      c+=a[i];
    }
    for(int i=n/2;i<n;i++){
      d+=a[i];
    }
    cout<<c*c+d*d<<"\n";

    return 0;
}
