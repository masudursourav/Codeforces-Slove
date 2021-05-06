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
    if(m==0){
      cout<<"YES"<<"\n";
      return;
    }
    vector<ll> a(m);
    for(int i=0;i<m;i++){
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll c=0;
    if(a[0]==1 || a[m-1]==n){
      cout<<"NO"<<"\n";
      return;
    }
    for(int i=0;i<m-1;i++){
      if((a[i+1]-a[i])==1){
        ++c;
        if(c==2){
          cout<<"NO"<<"\n";
          return;
        }
      }
        else{
          c=0;
        }
    }
    cout<<"YES"<<"\n";
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
