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
    ll r=0;
    ll sum=0;
    for(int i=1;i<=n;i++){
      ll in;
      cin>>in;
      in=in+r;
      sum+=min(8LL,in);
      r=in-min(8LL,in);
      if(sum>=k){
        cout<<i<<"\n";
        return 0;
      }
    }
   cout<<-1<<"\n";
    return 0;
}
