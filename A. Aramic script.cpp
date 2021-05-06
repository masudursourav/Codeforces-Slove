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
    set<char>s;
    set<string>ss;
    ll n;
    cin>>n;
    while(n--){
      string k;
      cin>>k;
      for(auto i:k){
        s.insert(i);
      }
      string ans(s.begin(),s.end());
      ss.insert(ans);
      s.clear();
    }
    cout<<ss.size()<<"\n";

    return 0;
}
