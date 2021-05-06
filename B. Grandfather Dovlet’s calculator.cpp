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

  ll digit[10]={6,2,5,5,4,5,6,3,7,6};
  ll a,b;
  cin>>a>>b;
  ll ans=0;
  for(int i=a;i<=b;i++){
    ll temp=i;
    while(temp){
      ll r=temp%10;
      ans+=digit[r];
      temp/=10;
    }
  }
  cout<<ans<<"\n";

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
