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
  vector<ll>a(n);
  ll c=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(i!=0){
      if((a[i]+a[i-1])<k){
        c+=k-(a[i]+a[i-1]);
        a[i]+=k-(a[i]+a[i-1]);
      }
    }
  }
  cout<<c<<"\n";
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
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
