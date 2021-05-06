//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    string s,q;
    int ans=0;
    bool ss=false;
    cin>>s;
    cin>>n;
      while(n--){
        cin>>q;
        string k=q;
        reverse(k.begin(),k.end());
        if(s==q || s==k){
          cout<<"YES"<<"\n";
          return 0;
        }
        else if(s[0]==q[1] && ans==0){
          ++ans;
        }
        else if(s[1]==q[0]){
          ss=true;
        }
      }
      if(ss && ans>0){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }

    return 0;
}
