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
    string s,t;
    cin>>s>>t;
    ll w=0;
    while(1){
      ll i=s.size()-w-1;
      ll j=t.size()-w-1;
      if(i>=0 && j>=0 && s[i]==t[j]){
        ++w;
      }
      else{
        break;
      }
    }
    cout<<s.size()+t.size()-2*w<<"\n";

    return 0;
}
