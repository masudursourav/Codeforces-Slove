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
  string a,b,ans;
  cin>>a>>b;
  ll k=10000;
  for(int i=0;i<=m-n;i++){
    string temp=b.substr(i,n);
    ll c=0;
    for(int j=0;j<n;j++){
      if(temp[j]!=a[j]){
        ++c;
      }
    }
    if(k>c){
      k=c;
      ans=temp;
    }
  }
  cout<<k<<"\n";
  for(int j=0;j<n;j++){
    if(ans[j]!=a[j]){
      cout<<j+1<<" ";
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
