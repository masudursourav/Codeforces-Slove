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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    if(n<k){
      cout<<-1<<"\n";
      return 0;
    }
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-k]<<" "<<a[n-k]<<"\n";

    return 0;
}
