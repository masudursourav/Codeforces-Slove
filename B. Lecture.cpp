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

  ll n,m;
  cin>>n>>m;
  map<string,string>ma;
  for(int i=0;i<m;i++){
    string a,b;cin>>a>>b;ma.insert(mp(a,b));
  }
  for(int i=0;i<n;i++){
    string s;cin>>s;
    if(s.size()<=ma[s].size()){
      cout<<s<<" ";
    }
    else{
      cout<<ma[s]<<" ";
    }
  }
  cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
