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
    ll t;
    cin>>t;
    while(t--){
      ll n,x;
      cin>>n>>x;
      if(n<2){
        cout<<1<<"\n";
        continue;
      }
      n=n-2;
      ll k;
      if(n%x==0){
        k=n/x;
      }
      else{
        k=(n/x)+1;
      }
      cout<<k+1<<"\n";
    }

    return 0;
}
