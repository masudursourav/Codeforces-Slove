//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
    ll n,k;
    cin>>n>>k;
    ll a[10000];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=k-1;;i=(i+1)%n){
      if(a[i]==1){
        cout<<i+1<<"\n";
        return;
      }
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
       input();
       ll t=1; //cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
