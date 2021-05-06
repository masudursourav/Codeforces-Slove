//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
vector<ll>a;
ll cube(ll n){
  return n*n*n;
}
void cal(){
for(ll i=1;;i++){
  a.pb(cube(i));
  if(cube(i)>1000000000005){
    break;
  }
}
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;cin>>t;
  cal();
  while(t--){
    ll n;
    cin>>n;
    bool ans=false;
    for(int i=1;i<n;i++){
      if(cube(i)>n){
        break;
      }
      if(binary_search(a.begin(),a.end(),n-cube(i))){
        ans=true;
        break;
      }
    }
    if(ans){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
  }


      return 0;
}
