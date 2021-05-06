//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       string s,ans;cin>>s;
       ll l=0,r=s.size()-1;
       for(int i=r;i>=0;i--){
         if(i&1){ans.pb(s[r]);--r;}else{ans.pb(s[l]);++l;}
       }
       reverse(ans.begin(),ans.end());
       cout<<ans<<"\n";

      return 0;
}
