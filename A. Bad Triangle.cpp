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
      ll n;
      cin>>n;
      ll a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      if(a[0]+a[1]>a[n-1]){
        cout<<-1<<"\n";
      }
      else{
        cout<<1<<" "<<2<<" "<<n<<"\n";
      }
    }

    return 0;
}
