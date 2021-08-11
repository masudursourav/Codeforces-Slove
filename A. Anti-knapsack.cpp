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
  cout<<n- k + k/2<<"\n";
  for(int i=k+1;i<=n;i++){
    cout<<i<<" ";
  }
  for(int i=(k+1)/2;i<k;i++){
    cout<<i<<" ";
  }
  cout<<"\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
