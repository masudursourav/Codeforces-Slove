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
    ll k=a[0];
    for(int i=1;i<n;i++){
        a[i]=k+a[i];
        if(a[i]>k)
        k=a[i];
    }
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
