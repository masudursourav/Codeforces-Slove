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
      ll o=0,e=0;
      ll sum=0;
      for(int i=0;i<n;i++){
        ll in;
        cin>>in;
        sum+=in;
        if(in%2!=0){
          ++o;
        }
        else{
          ++e;
        }
      }
      if(sum%2==0 && (e==0 ||o==0)){
        cout<<"NO"<<"\n";
      }
      else{
        cout<<"YES"<<"\n";
      }
    }

    return 0;
}
