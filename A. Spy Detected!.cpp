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
    ll n;
    cin>>n;
    vector<ll>v(101,0),a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
      ++v[a[i]];
    }
    for(int i=0;i<n;i++){
      if(v[a[i]]==1){
        cout<<i+1<<"\n";
        return;
      }
    }

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t; cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
