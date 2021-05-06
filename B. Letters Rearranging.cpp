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
      string ans,s;
      bool k=true;
      cin>>s;
      ll a[27]={0};
      for(int i=0;i<s.size();i++){
        ++a[s[i]-'a'];
      }

      for(int i=0;i<26;i++){
        if(a[i]==(ll)(s.size())){
          cout<<-1<<"\n";
          k=false;
          break;
        }
        for(int j=0;j<a[i];j++){
          ans+=(char)('a'+i);
        }
      }
      if(k)
      cout<<ans<<"\n";
    }

    return 0;
}
