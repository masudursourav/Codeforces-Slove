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
      ll n,k;
      cin>>n>>k;
      ll s;
      if(n%k==0){
        s=(ll)(n/k);
      }
      else{
        s=(ll)(n/k);
        for(int i=0;i<n%k;i++)
        cout<<'a';
      }
      for(int i=0;i<k;i++){
        for(int j=0;j<s;j++){
          cout<<(char)('a'+i);
        }
      }
      cout<<"\n";
    }

    return 0;
}
