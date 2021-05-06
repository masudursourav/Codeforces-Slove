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
      ll a[3];
      for(int i=0;i<3;i++){
        cin>>a[i];
      }
      sort(a,a+3);
      if(a[1]!=a[2]){
        cout<<"NO"<<"\n";
      }
      else{
        cout<<"YES"<<"\n"<<a[0]<<" "<<a[0]<<" "<<a[2]<<"\n";
      }
    }

    return 0;
}
