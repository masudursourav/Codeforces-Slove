//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  }

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s=="0"){
      cout<<0<<"\n";
      return 0;
    }
    ll c=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='1'){
        ++c;
      }
    }
    if(c==1){
      ll ans=ceil((double)((s.size()-1.0)/2.0));
      cout<<ans<<"\n";
    }
    else{
      ll ans=ceil((double)((s.size())/2.0));
      cout<<ans<<"\n";
    }

    return 0;
}
